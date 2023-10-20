// use strerror() to generate default errors
// called with integers

#include <stdio.h>
#include <string.h>

int main(void){
    printf("%s\n",strerror(2));
}