// Excercise to test competence in the 'for' Iteration

#include <stdio.h>

int main(void){
    int x;

    printf("Iteration from 1 to 7\n");
    for(x = 1; x <= 7; ++x){ // 1 to 7; step = 1
        printf("%d\n",x);
    }

    printf("\nIteration from 3 to 23,step = 5\n");
    for(x = 3; x <= 23; x += 5){ // 3 to 23; step = 5
        printf("%d\n",x);
    }
    
    printf("\nIteration from 20 to -10,step = 6\n");
    for(x = 20; x >= -10; x -= 6){ // 20 to -10; step = -6
        printf("%d\n",x);
    }
    
    printf("\nIteration from 20 to -10,step = 6\n");
    for(x = 19; x <= 51; x += 8){ // 19 to 51; step = 8
        printf("%d\n",x);
    }
}