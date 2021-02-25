#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int num=1;
    // main 함수 지역변수 1은 main 함수를 벗어나야 소멸된다

    if (num==1)
    {
        // main 함수 안의 지역변수 1이 들어온다
        num+=10;
        printf("if문 내 지역변수 num: %d\n",num);
        // if문 안에 특정한 지역변수가 선언되어 있지 않기 때문에 main함수 지역변수가 대체
    }
    // main 함수 안의 지역변수이므로 11이 출력된다
    printf("main 함수 내 지역변수 num: %d\n",num);
    return 0;    
}