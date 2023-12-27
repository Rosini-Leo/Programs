// create a Sum() function that 
// pass values by reference.
 
#include <stdio.h>

void sumFunc(int *valuePtr);

int main(void){

    int value,value2; // user input 

    printf("Type the first value to sum: ");
    scanf("%d",&value);
    
    printf("Type the second value to sum: ");
    scanf("%d",&value2);

    int sum = value + value2; 
    sumFunc(&sum);

}

void sumFunc(int *valuePtr){
    printf("The result is: %d", *valuePtr);
}