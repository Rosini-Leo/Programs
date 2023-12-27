#include <stdio.h>

int main(void){
    printf("Enter two integers, and I will tell you \n");
    printf("the relationships they satisfy: ");

    int num1;
    int num2;

    // read the two int
    scanf("%d %d",&num1,&num2);

    // equal
    if(num1 == num2){
        printf("%d is equal to %d\n", num1 , num2);
    }
    
    // not equal 
    if(num1 != num2){
        printf("%d is not equal to %d\n", num1 , num2);
    }
    
    // less-greater
    if(num1 < num2){
        printf("%d is less than %d\n", num1 , num2);
    }
    if(num1 > num2){
        printf("%d is greater than %d\n", num1 , num2);
    }
    
    // less-greater || equal to
    if(num1 <= num2){
        printf("%d is less than or equal to %d\n",num1,num2);
    }
    if(num1 >= num2){
        printf("%d is greater than or equal to %d\n",num1,num2);
    }
}