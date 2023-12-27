// show the use of an algorithm 
// of sort selection 

#define SIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int array[], size_t length);
void swap(int array[], size_t first, size_t second);
void printPass(int array[], size_t length, unsigned int pass, size_t index);

int main(void){
    int array[SIZE]; // declare the array 

    srand(time(NULL)); // get seed 

    for(size_t i = 0; i < SIZE; i++){
        array[i] = rand() % 90 + 10; // assign a value to each el 
    }
    puts("Unsorted array:");

    for(size_t i = 0; i < SIZE; i++){
        printf("%d",array[i]);
    }

    puts("\n");
    selectionSort(array,SIZE);
    puts("Sorted array: ");

    for(size_t i = 0; i < SIZE; i++){
        printf("%d",array[i]);
    }
}

// func that sort the array 
void selectSort(int array[], size_t length){
    for(size_t i = 0; i < length; ++i){
        size_t smallest = i; 
        for(size_t j = i + 1; j < length; ++j){
            if(array[j] < array[smallest]){
                smallest = j;
            }
        }
        swap(array, i, smallest);
        
        // print i+1 (step)
        printPass(array, length, i+1, smallest);
    }
}

void swap(int array[], size_t first, size_t second){
    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}

void printPass(
    int array[],
    size_t length,
    unsigned int pass, 
    size_t index
){
    printf("After pass %2d: ", pass);

    for(size_t i = 0; i < index; i++){
        printf("%d",array[i]);
    }

    // point the changed el
    printf("%d* ", array[index]); 

    for(size_t i = index + 1; i < length; i++){
        printf("%d",array[i]);
    }

    printf("%s","\n      "); // align

    for(unsigned int i = 0; i < pass; i++){
        printf("%s","--  ");
    }

    puts(""); // newline
}