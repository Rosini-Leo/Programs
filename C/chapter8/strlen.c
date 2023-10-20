// use strlen() to define length of strings

#include <stdio.h>
#include <string.h>

int main(void){

    // pointers to analyze 
    const char *string1 = "aomavavcmacvaojcvaca";
    const char *string2 = "hello";
    const char *string3 = "I've a dog !!!";

    printf(
        "%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n%s\"%s\"%s%lu\n",
        "The length of ", string1, " is ",strlen(string1),
        "The length of ", string2, " is ",strlen(string2),
        "The length of ", string3, " is ",strlen(string3)
    );

}