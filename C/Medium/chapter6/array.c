// This file contain intro to Arrays

#include <stdio.h>
#include <stddef.h>

int main(void){
    int n[5];

    for(size_t i = 0; i < 5; ++i){
        n[i] = 0; // alloc 0 to element i
    }

    printf("%s%13s\n","Element","Value");

    for(size_t i = 0; i < 5; ++i ){
        printf("%7lu%13d\n",i,n[i]); // 'u' or 'lu'
    }
}
