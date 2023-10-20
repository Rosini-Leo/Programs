#include <stdio.h>

void printArray(const char *sPtr);

int main(void){
    char array[] = "Hello World! :)";
    printf("There you can see the printed string:\n");

    printArray(&array);
}

void printArray(const char *sPtr){
    for (; *sPtr != '\0'; ++sPtr){
        printf("%c",*sPtr);
    }
    
}