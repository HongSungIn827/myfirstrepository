#include <stdio.h>

int main(){
    
    int a = 10;
    double *b = &a;

    printf("*b = %d\n",*b);

    int c = 20;
    int *d = &c;

    printf("*d = %d\n",*d);
}