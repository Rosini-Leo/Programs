#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void){
    srand(time(NULL));

    for (unsigned int i = 1; i <= 10; ++i){
        printf("%10d", 1 + rand() % 6);

        if(i % 5 == 0){
            puts("");
        }
    }
    
}