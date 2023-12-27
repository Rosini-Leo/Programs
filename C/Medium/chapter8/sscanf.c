// Example of program with sscanf()
#include <stdio.h>

int main(void){
    char s[] = "31298 87.375";

    // values to read 
    int x;
    double y;

    sscanf(s,"%d%lf",&x,&y);
    printf(
        "%s\n%s%6d\n%s%8.3f\n",
        "The values stored in character array s are:",
        "Integer:", x,"double:",y
    );
    
}