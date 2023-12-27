// Display an example of a struct
// '.' and '->' operators

#include <stdio.h>

struct card{
    // pointers 
    char *face;
    char *suit; 
};

int main(void){

    // define the card; aCard point to card;
    struct card aCard;

    aCard.face = "Ace";
    aCard.suit = "Spades";

    struct card *cardPtr = &aCard; // address aCard to cardPtr

    printf(
        "%s%s%s\n%s%s%s\n%s%s%s\n",
        aCard.face," of ",
        aCard.suit,
        cardPtr->face," of ",
        cardPtr->suit,
        (*cardPtr).face," of ",
        (*cardPtr).suit
    );

}