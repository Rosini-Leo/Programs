// this code example show the work of the circuits condition

#include <stdio.h>

int main(void){
    int mark; 
    int attendance;

    printf("Insert the mark and the attendance of the student \n(0 to 10 and 0 or 1 ):\n");
    scanf("%d",&mark);
    scanf("%d",&attendance);

    if(mark >= 6 && attendance == 1){ // good marks
        printf("The student has passed the exam!");
    }else if((mark <= 6 && mark >= 5) || attendance == 0){ // so so
        printf("The student must make the exam again.");
    }else if(attendance != 1 || mark < 4){ // bad mark
        printf("The student has failed the exam."); 
    }
}