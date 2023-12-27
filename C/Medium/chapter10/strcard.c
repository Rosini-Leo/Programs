// show a program that share the cards with struct{}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS 52
#define FACES 13

// def. struct
struct card{
    const char *face;
    const char *suit;
};
typedef struct card Card;

// functions
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);
void fillDeck(
    Card *const wDeck,
    const char *wFace[],
    const char * wSuit[]
);

int main(void){
    Card deck[CARDS]; // def array of cards

    // init array pointers
    const char *face[] = {
        "Ace","Deuce","Three","Four","Five",
        "Six","Seven","Eight","Nine","Ten",
        "Jack","Queen","King"
    };

    const char *suit[] = {
        "Hearts","Diamonds","Clubs","Spades"
    };

    srand(time(NULL)); // random

    fillDeck(deck, face, suit); // load deck
    shuffle(deck); // random deck
    deal(deck); // share cards

}

// put string in the * Card
void fillDeck(
    Card * const wDeck,
    const char *wFace[],
    const char *wSuit[]){

    for(size_t i = 0; i < CARDS; ++i){
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    }
}

// mix cards
void shuffle(Card * const wDeck){
    for(size_t i = 0; i < CARDS; ++i){
        size_t j = rand() % CARDS;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// share cards
void deal(const Card * const wDeck){
    for(size_t i = 0; i < CARDS; ++i){
        printf(
            "%5s of %-8s%s",
            wDeck[i].face,
            wDeck[i].suit,
            ((i + 1) % 4 ? " " : "\n")
        );
    }
}