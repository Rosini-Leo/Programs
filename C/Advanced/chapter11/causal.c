// generate 'bank' accounts from random indexes

#include <stdio.h>

// def clientData struct 
struct clientData{
    unsigned int acctNum; // account number
    char lastName[15];
    char firstName[10];
    double balance;
};

int main(void){
    FILE *cfPtr; // pointer to 'accounts.dat'

    // open file
    if((cfPtr = fopen("accounts.dat","rb+")) == NULL){
        puts("File could not be opened.");
    }else{
        // obj{}
        struct clientData client = {0, "", "", 0.0};

        // req the values
        printf(
            "%s","Enter account number"
            " (1 to 100, 0 to end input): "
        );

        scanf("%d",&client.acctNum);

        while(client.acctNum != 0){
            printf("%s","\nEnter lastname, firstname, balance: ");

            fscanf(stdin, "%14s%9s%lf",
                client.lastName,
                client.firstName,
                &client.balance
            );

            // seek the record
            fseek(cfPtr, (client.acctNum - 1) * sizeof(struct clientData),SEEK_SET);

            // write infos
            fwrite(&client, sizeof(struct clientData), 1, cfPtr);

            // chance to type another *acctNum;
            printf("%s","\nEnter account number: ");
            scanf("%d", &client.acctNum);
        }
        fclose(cfPtr); // close file 
    }
}