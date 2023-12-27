// Try the "while" key using the "defined iteration" technique (counter)
#include <stdio.h>

int main(void){
    unsigned int counter; // unsigned take 8 bits, avoid negative numbers (under 0)
    counter = 0; // set counter to default 0 

    while(counter < 5){ // initializes the loop
        counter++; // increase the counter (starts from 1, not 0)
        printf("The counter is set to: %d\n",counter); // print the current current (1 to 5)
    }
}