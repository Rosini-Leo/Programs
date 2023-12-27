// strtok() = string token
// split a string in many tokens

#include <stdio.h>
#include <string.h>

int main(void){
    const char *string1 = "abcdefabcdef";
    const char *string2 = "def";

    printf(
        "%s%s\n%s%s\n\n%s\n%s%s\n",
        "string1 = ",string1,
        "string2 = ",string2,
        "The remainder of string1 beginning with the",
        "first occurence of string2 is: ",
        strstr(string1,string2)
    );
    
}