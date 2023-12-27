#include <stdio.h>

// NOTE: use Ptr while defining a pointer 
// pointer a referment function-to-function

// EXAMPLE : 

void doubler(int *nPtr); // pass a number to double it 

int main(void){
    int a,prev; 

    printf("Please define the number to double: ");
    scanf("%d",&a);

    prev = a; // save the previous status
    doubler(&a);

    printf("The double of %d is: %d",prev,a);
}

void doubler(int *nPtgr){
    *nPtgr = *nPtgr * 2;
}