#include <stdio.h>
#define SIZE 99

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[],unsigned const int answer[]);
void bubbleSort(unsigned int a[]);
void printArray(unsigned const int a[]);

int main(void){
    unsigned int frequency[10] = {0};

    unsigned int response[SIZE] = {
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8,9,
        1,2,3,4,5,6,7,8
    };

    mean(response);
    median(response);
    mode(frequency,response);

}


void mean(const unsigned int answer[]){
    printf("%s\n%s\n%s\n","********","  Mean","********");

    unsigned int total = 0; // sum of values

    for(size_t j = 0; j < SIZE; ++j ){
        total += answer[j];
    }

    printf(
        "The mean is the average value of the data\n"
        "items. The mean is equal to the total of\n"
        "all the data items divided by the number\n"
        "of data items (%u). The mean value for\n"
        "this run is: %u / %u = %.4f\n\n",
        SIZE,total,SIZE,(double) total / SIZE
    );
}

void median(unsigned int answer[]){
    printf("\n%s\n%s\n%s\n%s","********"," Median","********",
    "The unsorted array of responses is");

    printArray(answer);

    bubbleSort(answer);

    printf("%s","\n\n The sorted array is");
    printArray(answer);

    printf(
        "\n\n The median is element %u of\n "
        "the sorted %u element array.\n"
        "For this run the median is %u\n\n",
        SIZE / 2,SIZE, answer[SIZE / 2]
    );
}

void mode(unsigned int freq[],const unsigned int answer[]){
    printf("\n%s\n%s\n%s\n","******","  Mode","******");

    for(size_t j = 0;j < SIZE;++j){
        ++freq[answer[j]];
    }

    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
        "Response","Frequency","Histogram",
        "1 1 2 2","5 0 5 0 5"
    );

    unsigned int largest = 0;
    unsigned int modeValue = 0;

    for(size_t rating = 1;rating <= 9; ++rating){
        printf("%8zu%11u       ",rating,freq[rating]);

        if(freq[rating] > largest){
            largest = freq[rating];
            modeValue = rating;
        }

        for( unsigned int h = 1; h <= freq[rating]; ++h){
            printf("%s","*");
        }
        puts(" ");
    }
    printf(
        "\nThe mode is the most frequent value.\n"
        "For this run the mode is %u which occured"
        " %u times.\n",modeValue,largest );
}

void bubbleSort(unsigned int a[]){
    for( unsigned int pass = 1; pass < SIZE; ++pass ){
        for(size_t j = 0; j < SIZE - 1;++j){
            if( a[j] > a[j + 1]){
                unsigned int hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}

void printArray(const unsigned int a[]){
    for(size_t j = 0;j < SIZE;++j){
        if(j % 20 == 0){
            puts("");
        }
        printf("%2u",a[j]);
    }
}