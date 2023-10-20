// sample program that show 
// the use of global vars 

#include <stdio.h>
#include "extern.c"

extern int flag;

int main(void){
    printf("The number from the extern file is: %d",flag);
}