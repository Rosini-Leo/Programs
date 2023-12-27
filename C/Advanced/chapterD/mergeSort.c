// the mergeSort alogorithm is the most difficult 
// otherwise is the better (efficency)

#define SIZE 10 
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void mergeSort(int array[], size_t length);
void sortSubArray(int array[], size_t low, size_t high);
void merge(int array[], size_t left, size_t middle1, size_t middle2, size_t right);
void displayElements(int array[], size_t length); 
void displaySubArray(int array[], size_t left, size_t right);

int main(void){
    int array[SIZE]; // array to sort 

    srand(time(NULL)); // give the seed 

    for(size_t i = 0; i < SIZE; i++){
        array[i] = rand() % 90 + 10; // el[value]
    }

    puts("Unsorted array: ");
    displayElements(array,SIZE);
    puts("\n");
    
    // use the algorithm 
    mergeSort(array,SIZE);
    puts("Sorted array:");
    displayElements(array,SIZE); // print array
}

void mergeSort(int array[], size_t length){
    sortSubArray(array, 0, length - 1);
}

// sort lower part of an array
void sortSubArray(int array[], size_t low, size_t high){
    if((high - low) >= 1){ // if not "normal"
        size_t middle1 = (low + high) / 2;
        size_t middle2 = middle1 + 1; 

        // print "split step"
        printf("%s","split:   ");
        displaySubArray(array, low, high);
        printf("%s","\n      ");
        displaySubArray(array, low, middle1);
        printf("%s","\n      ");
        displaySubArray(array, middle2, high);
        puts("\n");

        // split array and sort 
        sortSubArray(array,low,middle1); // first
        sortSubArray(array,middle1,high); // second

        // mix the double array
        merge(array, low, middle1, middle2, high);
    }
}

void merge(
    int array[],
    size_t left, 
    size_t middle1, 
    size_t middle2, 
    size_t right
){
    // pointer to left arr 
    size_t leftIndex = left;

    // index to right array 
    size_t rightIndex = middle2; 

    // index to temp arr
    size_t combinedIndex = left; 
    int tempArray[SIZE];

    printf("%s","merge:    ");
    displaySubArray(array, left, middle1);
    printf("%s","\n      ");
    displaySubArray(array,middle2,right);
    puts("");

    // merge subArray until end 
    while(leftIndex <= middle1 && rightIndex <= right){
        // insert the smaller e move to the next step
        if(array[leftIndex] <= array[rightIndex]){
            tempArray[combinedIndex++] = array[leftIndex++];
        }else{
            tempArray[combinedIndex++] = array[rightIndex++];
        }
    }
    
    if(leftIndex == middle2){ // end to left subArray (?)
        while(rightIndex <= right){ // copy right subArray
            tempArray[combinedIndex++] = array[rightIndex++];
        }
    }else{
        while(leftIndex <= middle1){ // copy left subArray
            tempArray[combinedIndex++] = array[leftIndex++];
        }
    }

    for(size_t i = left; i <= right; i++){
        array[i] = tempArray[i];
    }

    // print subArray
    printf("%s","      ");
    displaySubArray(array, left, right);
    puts("\n");
}

// print all el 
void displayElements(int array[], size_t length){
    displaySubArray(array, 0, length - 1);
}

// print some value of the el
void  displaySubArray(int array[], size_t left, size_t right){
    // print empty space
    for(size_t i = 0; i < left; i++){
        printf("%s","      ");
    }

    for(size_t i = left; i <= right; i++){
        printf("%d",array[i]);
    }
}
