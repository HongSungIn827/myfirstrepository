#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void main(){
    // ptr1 -> 힙영역 주소값을 가리킨다.
    int *ptr1 = (int*)malloc(sizeof(int));
    int *ptr2 = (int*)malloc(sizeof(int)*7);

    *ptr1 = 20;

    
    for (int i = 0; i < 7; i++)
    {
        *(ptr2+i) = (i+1);
    }
    printf("*ptr1 = %d\n",*ptr1);

    for (int i = 0; i < 7; i++)
    {
        printf("*ptr2 = %d\n",*(ptr2+i));
    }

    free(ptr1);
    free(ptr2);
}