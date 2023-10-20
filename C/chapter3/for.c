// Intro to for 

#include <stdio.h>

int main(void){
    unsigned int sum = 0;
    
    //for 
    for(unsigned int num = 2; num <= 100;num += 2){
        sum += num; // sum = sum + num
        printf("The sum is: %d\n",sum); // expected 2550
    }
}