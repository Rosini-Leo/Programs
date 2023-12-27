// pre and post increment of the assignment operators

#include <stdio.h>

int main(void){
    int c; // main int for the example

    // process
    c = 5;

    // post 
    printf("POST\n");
    printf("%d\n",c); // 5
    printf("%d\n",++c); // 6
    printf("%d\n",c); // 6
    
    // process "back"
    c = 5;

    // pre
    printf("\nPRE\n");
    printf("%d\n",c); // 5
    printf("%d\n",c++); // 5
    printf("%d\n",c); // 6
};