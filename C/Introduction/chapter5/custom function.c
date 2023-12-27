#include <stdio.h>

int square(int y);

int main(void){
    for(int x = 1;x <= 10; ++x){ // 10 times 
        printf("%d ^ %d= %d\n",x,x,square(x));
    }
    
    puts("");
}

// def the custom function
int square(int y){
    return y * y;
}