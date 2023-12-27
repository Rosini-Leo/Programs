// program that use unions in C.
// Union has shared memory. 

#include <stdio.h>

// def. union num
union number{
    int x;
    double y;
};

int main(void){
    union number value; // define union variable

    value.x = 100; // define int x;
    printf(
        "%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
        "Put 100 in the integer number",
        "and print both members.",
        "int:", value.x,
        "double",value.y
    );

    value.y = 100.0; // insert a double int y; 
    printf(
        "%s\n%s\n%s\n %d\n\n%s\n %f\n\n\n",
        "Put 100 in the integer number",
        "and print both members.",
        "int:", value.x,
        "double",value.y
    );
}