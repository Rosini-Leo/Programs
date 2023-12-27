// play a 6-sided nut over 60.000.000 times

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <time.h>

#define SIZE 7

int main(void){
    // assign 0 'best practice'
    unsigned int frequency[SIZE] = {0};

    srand(time(NULL)); // random seed 

    for(unsigned int roll = 1; roll <= 60000000;++roll ){
        size_t face = 1 + rand() % 6;

        ++frequency[face];
    }
    printf("%s%17s\n","Face","Frequency");

    // print 'index of nut's sides'
    for(size_t face = 1; face < SIZE;++face){
        printf("%4ld%17d\n",face,frequency[face]);
    }
}