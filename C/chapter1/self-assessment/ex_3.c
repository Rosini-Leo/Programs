// greater or less integer
#include <stdio.h>

int main(void){
    int a,b,c;

    printf("%s","Please enter 3 integers: \n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%s","\n\n");

    // a-b
    if(a > b){
        printf("a) %d",a);
        printf(" is greater than %d\n",b);
    }
    
    if(a < b){
        printf("a) %d",b);
        printf(" is greater than %d\n",a);
    }

    // a-c
    if(a > c){
        printf("b) %d",a);
        printf(" is greater than %d\n",c);
    }
    
    if(a < c){
        printf("b) %d",c);
        printf(" is greater than %d\n",a);
    }
    // b-c
        if(b > c){
        printf("c) %d",b);
        printf(" is greater than %d\n",c);
    }
    
    if(b < c){
        printf("c) %d",c);
        printf(" is greater than %d\n",b);
    }
}