// This program'll print formatted string with
// '%%' '%p'

#include <stdio.h>

int main(void){
    int x = 12345;
    int *ptr = &x;

    printf("The value of ptr is %p\n",ptr);
    printf("The address of ptr is %p\n\n",&x);

    puts("Printing a %% in a format control string\n");
    
}