#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main(void){
    int finalChoice;

    srand(time(NULL));
    int random_number = rand() % 21;

    printf("%s","I've a number between 0 to 20, GUESS THE NUMBER!");
    printf("%s","\nYour choice:");
    
    scanf("%d",&finalChoice);

    while( finalChoice != random_number){ // iteration while the number is not right
        printf("%s","Wrong number!\nTry again:");
        scanf("%d",&finalChoice);
    }
    
    printf("Right! The number was %d",finalChoice);
}