// test variables "action field"

#include <stdio.h>

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1; // global var

int main(void){
    int x = 5;

    printf(" Local 'X' in outer scope of main is %d\n",x);

    // new action field
    {
        int x = 7;
        printf(" Local 'X' in inner scope of main is %d\n",x);
    }

    printf(" Local 'X' in outer scope of main is %d\n",x);

    useLocal(); // auto 'x' local
    useStaticLocal(); // static 'x' local
    useGlobal();    // 'x' global
    
    useLocal(); // redirect auto 'x' local
    useStaticLocal(); // it preserves its value
    useGlobal(); // it preserves its value

    printf("\n Local x in main is %d\n",x);
}

// reinitialize the var 

void useLocal(void){
    int x = 25; // reinitialize every-call

    printf("\n Local x in useLocal is %d after entering useLocal\n",x);

    ++x;

    printf(" Local x in useLocal is %d before entering useLocal\n",x);
}

void useStaticLocal(void){
    static int x = 50; 
    printf("\n Local static x is %d on entering useStaticLocal\n",x);
    
    ++x;
    
    printf(" Local static x is %d on exiting useStaticLocal\n",x);
}

void useGlobal(void){
    printf("\n Global x is %d on entering useGlobal\n",x);
    
    x *= 10;

    printf(" Global x is %d on exiting useGlobal\n",x);
}