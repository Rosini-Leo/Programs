// Example of 'for' loop breaked

#include <stdio.h>

int main(void){
    unsigned int x;

    // 10 times
    for(x = 1;x <= 10;++x){
        // if x == 5 break
        if(x == 5){
            break;
        }
        printf("%u",x);
    }
    printf("\n Broke out of loop at x == %u\n",x);
}