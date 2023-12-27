// Calculate the passed/failed exam 

#include <stdio.h>

int main(void){
    // declare
    int mark;
    int counter,passed,failed;

    // process
    mark = 0;
    counter = 0;
    passed = 0;
    failed = 0; 

    // start program
    while (counter <= 9){ // repeat 10 time
        counter++;
        printf("Enter result, 1 passed 2 failed:");
        scanf("%d",&mark);
        
        // manage passed/failed exams
        if(mark == 1){
            passed++;
        }else if(mark == 2){
            failed++;
        }else{
            printf("An occurred error, please insert 1 or 2 instead.\n");
        }
    }
    
    if(counter != 0){
        printf("\n\n"); // spacing
        printf("Passed exams: %d\n",passed);
        printf("Failed exams:%d\n",failed);

        printf("Total exams are: %d\n",counter);
    }   
}