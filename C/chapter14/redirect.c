// use of lists with variable length 

#include <stdio.h>
#include <stdarg.h>

double average(int i, ...); // prototype 

int main(void){
    double w = 37.5;
    double x = 22.5;
    double y = 1.7;
    double z = 10.2; 

    printf(
        "%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
        "w = ", w,
        "x = ", x, 
        "y = ",y,
        "z = ",z        
    );

    printf(
        "%s%.3f\n%s%.3f\n%s%.3f\n",
        "The average of w amd x is ",average(2, w, x),
        "The average of w, x, and y is ",average(3, w, x, y),
        "The average of w, x, y, and z is ",average(4, w, x, y, z)
    );
}

// calculate the average
double average(int i ,...){
    double total = 0; // init total 
    
    // store the info for va_start va_end
    va_list ap;

    va_start(ap, i); // int obj for va_list

    for(int j = 1; j <= i; ++j){
        total += va_arg(ap, double);
    }

    va_end(ap); // operation of "cleaning"
    return total / i;
}