// Introducing switch() in C;
// Calc the marks with switch()

#include <stdio.h>

int main(void){
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input (^D)");
    
    int grade; // mark 
    
    while ( (grade = getchar()) != EOF ){ // sentinel
        switch(grade){
            case 'A':
                case 'a':
                    ++aCount;
                    break; // exit from switch
            
            case 'B':
                case 'b':
                    ++bCount;
                    break;
            
            case 'C':
                case 'c':
                    ++cCount;
                    break;
            
            case 'D':
                case 'd':
                    ++dCount;
                    break;

            case 'F':
                case 'f':
                    ++fCount;
                    break;
            
            case '\n':
                case '\t':
                    case ' ':
                        break;

            default: // default 'fallback'
                printf("%s","Incorrect letter grade entered.");
                puts("Enter a new grade.");
                break; // not a 'MUST' but a best practice
        }
    } // end while 

    // summary
    puts("\nTotals for each letters grade are:");
    
    printf("A: %u\n",aCount);
    printf("B: %u\n",bCount);
    printf("C: %u\n",cCount);
    printf("D: %u\n",dCount);
    printf("F: %u\n",fCount);

}