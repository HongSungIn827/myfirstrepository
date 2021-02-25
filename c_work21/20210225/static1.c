#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void call();

int main(){
    call();
    call();
    call();
}

void call(){
    static int count=0;
    printf("%d\n",count);
    count++;
}