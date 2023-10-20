// Create a static array for getting better performance

#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(void){
    puts("First call to each function: ");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function: ");
    staticArrayInit();
    automaticArrayInit();
}

// local static array
void staticArrayInit(void){
    static int array1[3];

    puts("\nValues on entering staticArrayInit:");

    for(size_t i = 0; i < 2; i++ ){
        printf("array1[%lu] = %d  ",i, array1[i]);
    }

    puts("\nValues on exiting staticArrayinit: ");

    for(size_t i = 0; i <= 2; ++i){
        printf("array1[%lu] = %d  ",i, array1[i] += 5);
    }
}

// local automatic array
void automaticArrayInit(void){
    int array2[3] = {1,2,3};

    puts("\nValues on entering automaticArrayInit:");

    for(size_t i = 0; i <= 2; ++i){
        printf("array2[%lu] = %d  ",i,array2[i] += 5);
    }
}