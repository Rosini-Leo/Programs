/* This file explain the better ways, to 
avoid security problems, and gain the best practices */
#include <stdio.h>

int main(void){
    
    // If you need to use printf() with a newline,
    // instead, use the puts method
    puts("Welcome to C");
    
    // avoid using printf() with 1 arg,
    // instead use puts or %s
    printf("%s","hello world");
}