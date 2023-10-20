/*
Example of do...while program
*/
#include <stdio.h>

int main(void){
    unsigned int counter = 1;
    
    // print counter one time and check later
    // if condition can be runned again or not.

    do{
        printf("%u",counter);
    } while (++counter <= 10);
    
}