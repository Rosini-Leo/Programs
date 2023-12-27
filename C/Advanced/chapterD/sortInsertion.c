// sort algorithm by insertion 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// prototypes 
void insertionSort(int array[], size_t length);
void printPass(
    int array[], 
    size_t length, 
    unsigned int pass, 
    size_t index
);


int main(void){
    int array[SIZE]; // declare array to sort 

    srand(time(NULL)); // obtain the seed 

    for(size_t i = 0; i < SIZE; i++){
        // assign a value to each el 
        array[i] = rand() % 90 + 10;
    }

    puts("Unsorted array: ");

    for(size_t i = 0; i < SIZE; i++){ // print
        printf("%d  ",array[i]);
    }
}

void insertionSort(int array[], size_t length){
    for(size_t i = 0; i < length; i++){
        size_t moveItem = i; 
        int insert = array[i]; // position 


        while(moveItem > 0 && array[moveItem - 1] > insert){
            array[moveItem] = array[moveItem - 1];
            --moveItem; 
        }

        array[moveItem] = insert; // align item 
        printPass(array, length, i, moveItem);
    }
}

void printPass(int array[], size_t length, unsigned int pass, size_t index){
    printf("After pass %2d: ",pass);

    // print el 
    for(size_t i = 0; i < index; i++){
        printf("%d  ",array[i]);
    }

    printf("%d*",array[index]); // point the el 

    for(size_t i = index + 1; i < length; i++){
        printf("%d  ",array[i]);
    }
    
    printf("%s", "\n      "); // alignment 

    for(size_t i = 0; i <= pass; i++){
        printf("%s","--  ");
    }

    puts(""); // newline 
}