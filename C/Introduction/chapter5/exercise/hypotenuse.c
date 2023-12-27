#include <stdio.h>

float hypotenuse(float side1, float side2);

int main(void){
    printf("%.2f",hypotenuse(2.30,3.05));   
}


float hypotenuse(float side1, float side2){
    return side1 + side2;
}