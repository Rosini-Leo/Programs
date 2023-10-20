// input array,save, and display in 
// reverse way. 

#include <stdio.h>
#define SIZE 6

int main(void){
    int array[SIZE] = {0};

    // intro
    puts(
        "Please type the number"
        " to save in the array"
    );

    // save the array 
    for(size_t row = 1; row < SIZE; ++row){
        printf("Array[%zu] = ",row);
        scanf("%d",&array[row]); // user input 
    }

    puts("\n\nYour Array is:"); // below user output
    
    // print (reverse)
    for(size_t row2 = 5; row2 > 0; --row2){
        printf("Array[%zu] = %d\n",row2,array[row2]);
    }
}