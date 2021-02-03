#include <stdio.h>

// shift + delete 한줄삭제
// ctrl + k + c 주석처리
// ctrl + k + u 주석 설정 취소
// ctrl + z 뒤로가기
// ctrl + y 앞으로 가기

// c->exe 컴파일언어
// java->class
//python-> 없음 바로 실행 스크립트언어 이므로

void main(){
    int a = 10;
    int *b = &a;

    printf("a=%d\n",a);
    printf("*b=%d\n",*b);
    printf("\n");

    printf("&a=%d\n",&a);
    printf("b=%d\n",b);
    printf("\n");
    
    *b = 20;
    printf("a=%d\n",a);
    printf("*b=%d\n",*b);

    int c = 20;
    b = &c;
}