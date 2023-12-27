// This file input integers, save them 
// in one array and finally print it. 

#include <stdio.h>
#define SIZE 5 

int main(void){
    int array[SIZE] = {0}; // init array 
    
    printf("Insert an integer please:\n\n");

    for(size_t row = 0; row < SIZE; ++row){
        printf("Array[%zu] = ",row);
        scanf("%d",&array[row]);
    }

    printf("\nYour array is:");
    
    for(size_t row2 = 0; row2 < SIZE; ++row2){
        printf("\nArray[%zu] = %d",row2,array[row2]);
    }
}