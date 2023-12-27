// this program show how to define the type
// of chars accepted by scanf()
#include <stdio.h>

int main(void){
    char z[9]; // array z

    printf("%s","Enter a string: ");
    scanf("%8[aeiou]",z); // [aeiou] are the aditted char

    printf("The input was \"%s\"\n",z);

}