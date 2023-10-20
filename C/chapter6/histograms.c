// print an histogram

#include <stdio.h>
#define SIZE 5 

int main(void){
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n","Element","Value","Histogram");

    for(size_t i = 0; i < SIZE; ++i){
        printf("%7lu%13d        ",i,n[i]);

        for(int j = 1; j <= n[i]; ++j){
            // print '*' for each array value's length 
            printf("%c",'*');
        }
        puts(""); // end the histogram
    }
}