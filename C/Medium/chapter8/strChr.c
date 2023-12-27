// This program use strchr() to find
// characters in a string

// Also, it uses the strcspn()
// to return lenght of a string

#include <stdio.h>
#include <string.h>

int main(void){
    const char *string = "This is a test"; // init the string
    char character1 = 'a';
    char character2 = 'z';

    // search first char
    if(strchr(string,character1) != NULL){
        printf(
            "\'%c\' was found in \"%s\".\n",
            character1,string
        );
    }else{
        printf(
            "\'%c\' was not found in \"%s\".\n",
            character1,string
        );
    }


    // search second char
    if(strchr(string,character2) != NULL){
        printf(
            "\'%c\' was found in \"%s\".\n",
            character2,string
        );
    }else{
        printf(
            "\'%c\' was not found in \"%s\".\n",
            character2,string
        );
    }

    /* --  END OF FIRST FUNCTION  -- */

    printf("%s","\n\nBelow a test of the strcspn function:\n");

    // strcspn() function
    const char *string1 = "The value is 3.14159";
    const char *string2 = "1234567890";

    printf(
        "%s%s\n%s%s\n\n%s\n%s%lu\n",
        "string1 = ", string1,
        "string2 = ", string2,
        "The length of the initial segment of string1",
        "containing no characters from string2 = ",
        strcspn(string1,string2)
    );
}