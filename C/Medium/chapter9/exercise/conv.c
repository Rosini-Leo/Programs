// print a number with specification number

#include <stdio.h>

int main(void){
    // init doubles 
    double a;
    double b;
    double c;

    // START
    puts("Enter one floating point: ");

    // get values 
    scanf("%le %lf %lg",&a,&b,&c);

    // print a number with e,f,g 'converter';
    printf("%le %lf %lg",a,b,c);
}