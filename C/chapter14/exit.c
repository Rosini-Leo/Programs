// show the use of exit and atexit

#include <stdio.h>
#include <stdlib.h>

void print(void); // proto

int main(void){
    atexit(print);

    puts(
        "Enter 1 to terminate program with function exit"
        "\nEnter 2 to terminate program normally"        
    );

    int answer; // menu choice
    scanf("%d",&answer);

    if(answer == 1){
        puts("\nTerminating program with function exit");
        exit(EXIT_SUCCESS);
    }
    puts("\nTerminating program by reaching the end of main");
}

// print msg before the end 
void print(void){
    puts(
        "Executing function print at program "
        "termination\nProgram terminated"
    );
}