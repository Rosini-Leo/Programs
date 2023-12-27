// Introduction to math library and 
// abstraction of functions.

// NB. This file is for example,it doesn't work

#include <stdio.h>
#include <math.h>

int main(void){
    sqrt(900.0);  // square root

    cbrt(9.0); // cube root (only C99 and C11)

    exp(2.0); // exponential

    log(2.718282); // normal LOGe

    log10(100.0); // LOG(x)10

    fabs(-13.4); // absolute value

    ceil(9.2); // rounds (small)
    
    floor(9.2); // rounds (big)

    pow(2,2); // number raised to a power (2^2) = 4
}