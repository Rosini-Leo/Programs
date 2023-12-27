// Software that find max Integer between 3 of them.

#include <stdio.h>

int maximum(int x,int y,int z);

int main(void){
    int number1;
    int number2;
    int number3;

    printf("%s","Enter three integers: \n");
    scanf("%d%d%d",&number1,&number2,&number3);
    printf("Maximum is:%d\n",maximum(number1,number2,number3));
}

// custom function
int maximum(int x,int y,int z){
    int max = x;

    if(y > max){
        max = y;
    } 
    
    if (z > max){
        max = z;
    }

    return max;
}