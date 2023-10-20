// This file is a simulation of the game called 'craps'

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

enum Status { CONTINUE, WON , LOST }; // state of the game
int rollDice(void);

int main(void){
    srand(time(NULL)); // random the seed of number 

    int myPoint;
    enum Status gameStatus; // can contain one option 
    int sum = rollDice(); // roll of the dice

    switch (sum){
    case 7:
    case 11:
        gameStatus = WON;
        break;

    case 2:
    case 3: 
    case 12:
        gameStatus = LOST;
        break;

    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n",myPoint);
        break;
    }

    while (CONTINUE == gameStatus){
        sum = rollDice(); // roll of the dice

        if(sum == myPoint){
            gameStatus = WON;
        }else{
            if(7 == sum){
                gameStatus = LOST;
            }
        }
    }

    if(WON == gameStatus){
        puts("Player wins");
    }else{
        puts("Player loses");
    }
}


// custom functions
int rollDice(void){
    int die1 = 1 + (rand() % 6); // random value for first dice
    int die2 = 1 + (rand() % 6); // random value for second dice

    printf("Player rolled %d + %d = %d\n",die1,die2, die1 + die2);

    return die1 + die2;
}