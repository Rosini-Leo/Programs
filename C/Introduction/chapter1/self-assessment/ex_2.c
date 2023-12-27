// This file will calculate the product of three integers
#include <stdio.h>

int main(void){
    // Take the products 
    int x,y,z;
    printf("%s","Please insert three integers: ");
    scanf("%d %d %d",&x,&y,&z);
    // Calculate the produts
    int result; 
    result = x * y * z;
    // End of the program
    printf("The product is: %d",result);
}