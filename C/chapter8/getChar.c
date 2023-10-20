#include <stdio.h>
#define SIZE 80

int main(void){
    int c; // save user's input
    char sentence[SIZE]; // create char array
    int i = 0;

    puts("Enter a line of text:");

    // use getchar to read all char 
    while((i < SIZE - 1) && (c = getchar()) != '\n'){
        sentence[i++] = c;
    }

    sentence[i] = '\0'; // end of string

    // print the string 
    puts("\nThe line entered was:");
    puts(sentence);

}