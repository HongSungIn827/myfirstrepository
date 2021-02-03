#include <stdio.h>

int main(){

    int a = 10;
    int *b = &a;

    // b는 a의 주소값 (11행 설명)
    // +1 은 type에 따라서 4byte of 8byte가 증가한 것을 의미 (12행 설명)
    
    // printf("b = %d\n",b);
    // printf("b+1 = %d\n",b+1);
    // printf("*(b+1) = %d\n",*(b+1));
    // printf("*(b)+1 = %d\n",*(b)+1);

    *b += 30;
    printf("*(b) = %d\n",*b);
    *b = *b + 30;
    printf("*b = %d",*b);
}