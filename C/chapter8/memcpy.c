// This program use memcpy() to copy bites from obj{}
// note: memcpy() is better than strcpy()

#include <stdio.h>
#include <string.h>

int main(void){

    // create an array
    char s1[17];
    char s2[] = "Copy the string";

    memcpy(s1,s2,17);

    printf(
        "%s\n%s\"%s\"\n",
        "After s2 is copied into s1 with memcpy,",
        "s1 contains ",
        s1
    );
}