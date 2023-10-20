// explain how to use double indexes in C.

#include <stdio.h>

void printArray(int a[][3]);

int main(void){
    
    // First array
    int array1[2][3] = { {1,2,3}, {4,5,6}};
    puts("Values in array1 by row are: ");
    printArray(array1);

    // Second array
    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("Values in array2 by row are: ");
    printArray(array2);

    // Third array
    int array3[2][3] = {{1,2},{4}};
    puts("Values in array3 by row are: ");
    printArray(array3);

}

void printArray(int a[][3]){ // n rows 3 columns
    for(size_t i = 0; i <= 1; ++i){
        for(size_t j = 0;j <= 2;++j){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}