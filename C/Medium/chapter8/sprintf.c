// A short intro do sprintf in C.
#include <stdio.h>
#define SIZE 80

int main(void){

    // values to read 
    int x; 
    double y;

    puts("Enter an integer and a double:");
    scanf("%d%lf",&x,&y);

    char s[SIZE]; // create a char array 
    sprintf(s,"Integer: %6d\ndouble:%7.2f",x,y);

    printf("%s\n%s\n","The formatted output stored in array s is:",s);

}