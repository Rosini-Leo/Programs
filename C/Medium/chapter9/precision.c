// A sample program that use
// precision for strings,int,...

#include <stdio.h>

int main(void){

    // integers
    puts("Using precision for integers");
    int i = 873;
    printf("\t%.4d\n\t%.9d\n\n",i,i);

    // floating-point 
    puts("Using precision for floating-point numbers");
    double f = 123.94536;
    printf("\t%.3f\n\t%.3e\n\t%.3g\n\n",f,f,f);

    // strings 
    puts("Using precision for strings");
    char s[] = "Happy Birthday";
    printf("\t%.11s\n",s);

}