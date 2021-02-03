#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int a[5] = {1,2,3,4,5};
    int *ptr = a;                          // ptr 포인터 변수에 a[0] 주소값을 할당한다

    printf("ptr = %d\n",ptr);              // a[0] 주소값을 나타낸다
    printf("ptr[0] = %d\n",ptr[0]);        // a[0] 주소값의 값을 나타낸다
    printf("*ptr = %d\n",*ptr);            // a[0] 주소값의 값을 나타낸다

    printf("\n");

    printf("a = %d\n",a);                  // a[0] 주소값을 나타낸다
    printf("ptr[1] = %d\n",ptr[1]);        // a[1] 주소값의 값을 나타낸다
    printf("\n");
    printf("*ptr = %d\n",*(ptr+1));        // a[0] 주소값 + 1 = int tpye 이므로 주소값에 + 4
    printf("*ptr = %d\n",*ptr+1);          // *ptr 이 a[0] 주소값 이므로 결과값은 2
}