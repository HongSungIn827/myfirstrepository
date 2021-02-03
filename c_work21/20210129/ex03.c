#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void odd(int *p){

    printf("짝수 출력");
    int i =0;
     for ( i = 0; i < 10; i++)
    {
        if (p[i]%2==0)
        {
            printf("%d ",p[i]);
        }
        
    }
}

void even(int *p){

    printf("홀수 출력");
    int i =0;
     for ( i = 0; i < 10; i++)
    {
        if (p[i]%2==1)
        {
            printf("%d ",p[i]);
        }
        
    }
}

void main(){
    int arr[10];
    int i = 0;
    for ( i = 0; i < 10; i++)
    {
        printf("%d 숫자 입력\n",i);
        scanf("%d",&arr[i]);
    }

    odd(arr);
    even(arr);

   
    
    
}