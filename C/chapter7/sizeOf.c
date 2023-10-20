// use of sizeof
#include <stdio.h>
#define SIZE 20

size_t getSize(float *ptr);

int main(void){
    float array[SIZE];

    printf("The number of bytes in the array is %lu"
        "\nThe number of bytes returned by getSize is %lu\n",
        sizeof(array),getSize(array));
}


size_t getSize(float *ptr){
    return sizeof(ptr);
}