#include <stdio.h>

int main(void){
    // 1- define variables 
    int number;

    // 2- require user input 
    printf("%s","Please leave a number: ");
    scanf("%d",&number);

    // 3- check
    if(number != 7){
        printf("%s","This var number is not equal to 7\n");
    }
    
    // 4- print on 2 line that string 
    puts("This is a C program");
    puts("This is a C program");
    
    // 5- print the same string on different lines for each words
    printf("%s","This\nis\na\nC\nprogram");
}