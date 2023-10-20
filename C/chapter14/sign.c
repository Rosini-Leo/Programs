// sample program that explain how to use 
// signals on C with the prop library 

#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <time.h>

// proto
void signalHandler(int signalValue); 

int main(void){
    signal(SIGINT,signalHandler); // register sign enter 
    srand(time(NULL)); // random seed 

    // print values between 1 to 100
    for(int i = 1; i <= 100; ++i){
        int x = 1 + rand() % 50; // casual integer 

        // generate SIGINT when x = 25
        if( x == 25 ){
            raise(SIGINT);
        }

        printf("%4d",i);

        // when x^10 print \n 
        if(i % 10 == 0){
            printf("%s","\n");
        }
    }
}

// manage signal
void signalHandler(int signalValue){
    printf(
        "%s%d%s\n%s",
        "\nInterrupt signal (",signalValue,") received.",
        "Do you wish to continue (1 = yes, 2 = no)? "
    );

    int response; // user response
    scanf("%d",&response);

    // check the right answer 
    while(response != 1 && response != 2){
        printf("%s","(1 = yes or 2 = no)? ");
        scanf("%d",&response);
    }

    // check if is time to end 
    if(response == 1){
        // register signal manager for the next SIGINT
        signal(SIGINT,signalHandler);
    }else{
        exit(EXIT_SUCCESS);
    }
}