#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

static int a = 10;
void doA(){
    a = 20;
}

void main(){
    a = 30;
    int b = 20;
    int c = 30;
    void * prt1 = malloc(4);
    void * prt2 = malloc(8);

    printf("ptr1 = %d\n",prt1);
    printf("ptr2 = %d\n",prt2);

    free(prt1);
    free(prt2);
}
// ♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡♥♡