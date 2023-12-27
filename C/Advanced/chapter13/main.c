// This sample program show the work 
// of the pre-processor; 

#include <stdio.h>

#define SOM(x,y) (x + y)

#define DEF "Defined Variable"
#if !defined(DEF)
    #define DEF "Already defined !"
#endif

#define HELLO(txt) puts("Hello, "#txt);

int main(void){
    printf("The result of 2 + 6 = %d\n",SOM(2,6));

    printf("\n%s\n\n",DEF);

    HELLO(world);
}