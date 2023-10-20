// that is a simple calculator made menu-text like. 
#include <stdio.h>

// prototype
void sum(int a, int b);
void subtract(int a, int b);
void divide(int a, int b);

int main(void){
    int sentinel,n[2] = {0};
    
    // get numbers from user input   
    for(size_t i = 0; i <= 1;++i){
        printf("Insert a number: \n");
        scanf("%d",&n[i]);
    }

    printf(
        "\nDecide what function use\n"
        "1- Sum\n"
        "2- Subtract\n"
        "3- Divide\n"
        "Your choice: "
        );
    
    scanf("%d",&sentinel);

    // grab math function from input 
    switch (sentinel){
        case 1:
            sum(n[0],n[1]);
            break;
        case 2:
            subtract(n[0],n[1]);
            break;
        case 3:
            divide(n[0],n[1]);
            break;
    
        default:
            break;
    }

}

// math functions 
void sum(int a, int b){
    printf("\nThe result is: %d",(a + b));
}

void subtract(int a, int b){
    printf("\nThe result is: %d",(a - b));
}

void divide(int a, int b){
    printf("\nThe result is: %d",(a / b));
}