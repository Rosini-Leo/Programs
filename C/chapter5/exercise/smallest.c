#include <stdio.h>

int smallest(int x, int y, int z);

int main(void){

    printf("%d",smallest(1,2,3));
}


int smallest(int x, int y, int z){ // return one value but given three

    return x + y + z;
}