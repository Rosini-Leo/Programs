#include <stdio.h>
#define SIZE 10

void bubbleSort(int * const array, size_t size);

int main(void){
    int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };

    puts("Data items in original order");

    // cycle of array
    for(size_t i = 0; i < SIZE; ++i){
        printf("%4d",a[i]);
    }

    bubbleSort(a,SIZE);

    puts("\nData items in ascending order");

    for(size_t i = 0; i < SIZE; ++i){
        printf("%4d",a[i]);
    }
    puts("");
}

void bubbleSort(int * const array, size_t size){
    void swap(int *element1Ptr, int *element2Ptr);

    // check iteration
    for(unsigned int pass = 0; pass < size - 1; ++pass){
        // check iteration's comparisons
        for(size_t j = 0; j < size - 1; ++j)

            // order values 
            if(array[j] > array[j + 1]){
                swap(&array[j], &array[j + 1]);
            }
    }
}

void swap(int *element1Ptr,int *element2Ptr){
    int hold = *element1Ptr;
    *element1Ptr = *element2Ptr;

    *element2Ptr = hold;
}