#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Add(int val);
int num;
// 원래는 Add 함수가 main 함수 위에 있어야 한다.
// 하지만 일단 "Add 라는 함수를 쓸거야." 라고 미리 선언한다면
// main 함수 다음에 Add 함수를 써도 된다

int main(void){
    printf("num: %d\n",num);
    Add(3);
    printf("num: %d\n",num);
    num++;
    printf("num: %d\n",num);
    return 0;
}

void Add(int val){
    num+=val;
}