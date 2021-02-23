#define _CRT_SECURE_NO_WARNINGS
#define NAME "Rooney"
#define AGE 33
#define PRINT_ADDR puts("주소 출력\n");

#include <stdlib.h>
#include <stdio.h>

void main(){
    printf("%s\n",NAME);
    printf("%d\n",AGE);
    PRINT_ADDR
}