// first program in C
#include <stdio.h>

int main(void){
    int integer1;
    int integer2;
    // Print needed integer and take it
    printf("Enter first integer: \n");
    scanf("%d",&integer1);
    // Another integer
    printf("Enter second integer: \n");
    scanf("%d",&integer2);
    // calc the result 
    int result;
    result = integer1 + integer2;
    printf("The sum is: %d ",result);
}