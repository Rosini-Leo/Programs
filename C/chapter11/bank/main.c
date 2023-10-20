/* Program that manage sample bank 
accounts, that are saved on records in the 
"accounts.dat" file. 
You can remove,edit,add records with CLI. */

#include <stdio.h>

// define the client structure
struct clientData{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

// prototypes
unsigned int enterChoice(void);
void textFile(FILE *readPtr);
void updateRecord(FILE *fPtr);
void newRecord(FILE *fPtr);
void deleteRecord(FILE *fPtr);

int main(void){
    FILE *cfPtr; // pointer to "accounts.dat"
     
    // open file to update
    if((cfPtr = fopen("accounts.dat","rb+")) == NULL ){
        puts("File could not be opened"); // error msg
    }else{
        unsigned int choice; 

        // choices 
        while((choice = enterChoice()) != 5){
            switch (choice){
            
            case 1: // create
                textFile(cfPtr);
                break;
            
            case 2: // update record
                updateRecord(cfPtr);
                break;
            
            case 3: // create record
                newRecord(cfPtr);
                break;
            
            case 4: // delete record
                deleteRecord(cfPtr);
                break;

            default: // invalid choice
                puts("Incorrect choice");
                break;
            }
        }
        fclose(cfPtr); // close of file 
    }
}

// create a formatted text file 
void textFile(FILE *readPtr){
    FILE *writePtr; // file's pointer 

    // open file to write in 
    if((writePtr = fopen("accounts.dat","w")) == NULL){
        puts("File could not be opened."); // error message
    }else{
        rewind(readPtr); // move POINTER to START of FILE

        fprintf(
            writePtr, "%-6s%-16s%-11s%10s\n",
            "Acct", "Last name", "First name", "Balance"
        );

        while(!feof(readPtr)){
            // create clientData 
            struct clientData client = {0, "", "", 0.0};
            int result = fread(&client, sizeof(struct clientData), 1, readPtr);

            // write a single record 
            if(result != 0 && client.acctNum != 0){
                fprintf(
                    writePtr, "%-6d%-16s%-11s%10.2f\n",
                    client.acctNum, client.lastName,
                    client.firstName, client.balance
                );
            }
        }
        fclose(writePtr); // close file
    }
}

// update the balance in the record
void updateRecord(FILE *fPtr){
    // get record number
    printf("%s","Enter account to update (1- 100):");
    unsigned int account; 
    scanf("%d",&account);

    // move pointer to record (in file)
    fseek(fPtr, (account - 1) * sizeof(struct clientData),SEEK_SET);

    struct clientData client = {0, "", "", 0.0};

    // read file record 
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // printf error, if record doesn't exist 
    if(client.acctNum == 0){
        printf("Account #%d has no information.\n",account);
    }else{ // update account balance 
        printf(
            "%-6d%-16s%-11s%10.2f\n\n",
            client.acctNum, client.lastName,
            client.firstName, client.balance
            );
        
        // request transaction
        printf("%s","Enter charge (+) or payment (-): ");
        double transaction;
        scanf("%lf",&transaction);
        client.balance += transaction; // update 

        printf(
            "%-6d%-16s%-11s%10.2f\n",
            client.acctNum, client.lastName, 
            client.firstName, client.balance 
        );

        fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET);

        // write the new record 
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

// delete an existing record 
void deleteRecord(FILE *fPtr){
    // get account number 
    printf("%s","Enter account number to delete (1 - 100): ");
    unsigned int accountNum; 
    scanf("%d",&accountNum);

    // move pointer 
    fseek(fPtr,(accountNum - 1) * sizeof(struct clientData), SEEK_SET);
    struct clientData client; 

    // read record 
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.acctNum == 0){
        printf("Account %d does not exist.\n", accountNum);
    }else{ // delete record 
        fseek(fPtr,(accountNum - 1) * sizeof(struct clientData), SEEK_SET);

        struct clientData bankclient = {0 , "", "", 0.0};

        // move existing record to empty one 
        fwrite(&bankclient, sizeof(struct clientData), 1, fPtr);
    }
}

// create a new account 
void newRecord(FILE *fPtr){
    
    // get number, to create record 
    printf("%s","Enter new account number (1 - 100): ");
    unsigned int accountNum;
    scanf("%d",&accountNum);

    // move pointer 
    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

    // create clientData
    struct clientData client = {0, "", "", 0.0}; 

    // read record 
    fread(&client, sizeof(struct clientData), 1, fPtr);

    // print error msg if already exists 
    if(client.acctNum != 0){
        printf(
            "Account #%d already contains information.\n"
            ,client.acctNum
        );
    }else{ // create record 
        // type infos 
        printf("%s","Enter lastname, firstname, balance\n?");
        scanf(
            "%14s%9s%lf",
            client.lastName, 
            client.firstName, 
            &client.balance
        );

        client.acctNum = accountNum;

        // move pointer 
        fseek(fPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);

        // insert the record in the file 
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
}

// define user choice
unsigned int enterChoice(void){
    // printf choices 
    printf(
        "%s","\nEnter your choice\n"
        "1 - store a formatted text file accounts called\n"
        "    \"accounts.txt\" for printing\n"
        "2 - update an account\n"
        "3 - add a new account\n"
        "4 - delete an account\n"
        "5 - end program\n?"
    );

    unsigned int menuChoice;
    scanf("%u",&menuChoice); // user input 

    return menuChoice;
}