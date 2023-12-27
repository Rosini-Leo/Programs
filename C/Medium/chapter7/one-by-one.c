// This file try to print an array of characters 
// 'one-by-one'

#include <stdio.h>

void printCharacters(const char *sPtr); 

int main(void){
    char string[] = "print characters of a string"; 

    puts("The string is: ");
    printCharacters(string);
    puts("");
}

void printCharacters(const char *sPtr){
    for(;*sPtr != '\0';++sPtr){ // not an init
        printf("%c",*sPtr);
    }
}