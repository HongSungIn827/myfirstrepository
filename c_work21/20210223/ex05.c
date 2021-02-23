#define _CRT_SECURE_NO_WARNINGS
#define ADD

#define HIT_NUM 6
#include <stdio.h>

void main(){

#ifdef ADD
    printf("ADD가 선언 되어 있다.\n");
#endif

#if HIT_NUM == 5
    printf("HIT_NUM은 5입니다.");
#elif HIT_NUM == 6
    printf("HIT_NUM은 6입니다.");    
#endif    
}