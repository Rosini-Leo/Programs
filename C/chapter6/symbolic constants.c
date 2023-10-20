#include <stdio.h>
#define SIZE 5 // array size 

int main(void){
    int s[SIZE];

    for(size_t j = 0; j < SIZE; ++j){
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n","Element","Value");

    for (size_t j = 0; j < SIZE; ++j){
        printf("%7lu%13d\n",j,s[j]);
    }
    
}