// Caused of debugging mode the num seems random, but they don't !

#include <stdio.h>
#include <stdlib.h>

int main(void){
    for (unsigned i = 1; i <= 20; ++i){
        // print random num
        printf("%10d",1 + (rand() % 6)); // change in scale
        
        // if can be divided by 5 puts an empty character
        if( i % 5 == 0){
            puts("");
        }
    }   
}