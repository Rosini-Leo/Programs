// This program is an example of how the sentinel value works.

#include <stdio.h>

int main(void){
    unsigned int counter; // marks read
    int grade;
    int total; // sum of the marks 
    float average; // grade point average (decimal)

    // initialization phase
    total = 0;
    counter = 0;

    // processing
    printf("%s","Enter grade, -1 to end: ");
    scanf("%d",&grade);

    // use "while" key up to the sentinel value
    while(grade != -1){
        total = total + grade; // update the total 
        counter = counter + 1; // increase marks counter 

        // earn the next user's value 
        printf("%s","Enter grade, -1 to end: ");
        scanf("%d",&grade);
    }

    // end of the program
    if(counter != 0){
        average = (float) total / counter; // avoid truncation
        printf("Class average is %.2f\n",average); // average with two-digit precision
    }else{
        puts("No grades were entered");
    }
}