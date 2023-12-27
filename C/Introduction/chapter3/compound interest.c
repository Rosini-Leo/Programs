// calc compound interest 
// a = p(1+r)^n

#include <stdio.h>
#include <math.h>

int main(void){
    double principal = 1000.0;
    double rate = .05;

    // print the headers
    printf("%4s%21s\n","Year","Amount on deposit");

    for(unsigned int year = 1; year <= 10; ++year ){
        
        // doc: https://www.programiz.com/c-programming/library-function/math.h/pow
        double amount = principal * pow(1.0 + rate,year); 

        // print one row 
        printf("%4u%21.2f\n",year,amount);
    }
}