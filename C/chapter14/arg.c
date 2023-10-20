// sample program that explain
// how to use args on CLI 

#include <stdio.h>


int main(int argc, char *argv[]){
    if(argc != 3){ // checker 
        puts("Usage: mycopy infile outfile");
    }else{
        // pointer to the output
        FILE *inFilePtr; 

        if((inFilePtr = fopen(argv[1],"r")) != NULL ){
            FILE *outFilePtr; // pointer to output 

            if((inFilePtr = fopen(argv[2],"w")) != NULL ){
                int c; // contain already read integers

                while((c = fgetc(inFilePtr)) != EOF){
                    fputc(c, outFilePtr);
                }
                fclose(outFilePtr); // close file 
            }else{ // file cannot be opened 
                printf("File\"%s\" could not be opened\n",argv[2]);
            }
            fclose(inFilePtr); // close input file
        }else{ // close the file 
            printf("File \"%s\" could not be opened\n",argv[1]);
        }
    }
}