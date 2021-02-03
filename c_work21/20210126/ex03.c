#include <stdio.h>

void main(){
    int num =8;
    int *pnum;
    pnum = &num;

    // int *pnum = &num;   <----- 5-6행 코드를 1줄로 설정

    printf("pnum value is \n");
    printf("*pnum = %d\n",*pnum);
    printf("\n");
    printf("pnum address value is \n");
    printf("pnum = %d\n",pnum);
    printf("\n");
    printf("&num = %d",&num);
}