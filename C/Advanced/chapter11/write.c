// this file show how to manage files with C.

#include <stdio.h>

int main(void){

    FILE *cfPtr; // cfPtr = pointer to clients.txt file

    // fopen() open the file to write
    if((cfPtr = fopen("clients.txt","w")) == NULL){
        puts("File could not be opened");
    }else{
        puts("Enter the account, name and balance.");
        puts("Enter EOF to end input.");
        printf("%s","? ");

        unsigned int account;
        char name[30]; // name holder
        double balance;

        // get infos 
        scanf("%d%29s%lf", &account, name, &balance);

        // write on the file 
        while(!feof(stdin)){
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
            printf("%s","? ");
            scanf("%d%29s%lf", &account, name, &balance);
        }
        fclose(cfPtr); // close the file 
    }
}