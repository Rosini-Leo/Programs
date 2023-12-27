// Example of standard bool library usage

#include <stdio.h>
#include <stdbool.h>

int main(void){
    int x; 
    bool check;

    printf("Do you have a dog? \n(1=yes 0=no)\n");
    scanf("%d",&x);
    check=x;
    
    if(check == true){
        printf("Good! I love dogs :)");
    }else{
        printf("You need to buy one! \nThey're very cute...");
    }
}