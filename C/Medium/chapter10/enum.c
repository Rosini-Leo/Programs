// sample program that use enum

#include <stdio.h>

enum months{
        JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main(void){
    // array pointers
    const char *monthName[] = {
        "", "January", "Feburary", "March",
        "April", "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    for(enum months month = JAN; month <= DEC; ++month){
        printf("%2d%11s\n", month, monthName[month]);
    }
}