// this file show how to read files *sequential access

#include <stdio.h>

int main(void){
    FILE *cfPtr; // pointer to the file

    // open file *only read
    if(cfPtr = fopen("accounts.dat","r"),NULL){
        puts("File could not be opened");
    }else{ // read name, balance, acc
        unsigned int account;
        char name[30];
        double balance;

        printf(
            "%-10s%-13s%s\n",
            "Account",
            "Name",
            "Balance"
        );

        fscanf(cfPtr,"%d%29s%lf", &account, name, &balance);

        // Write 
        while(!feof(cfPtr)){
            printf("%-10d%-13s%7.2f\n",account, name, balance);
            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
        }
        fclose(cfPtr); // close file 
    }

}