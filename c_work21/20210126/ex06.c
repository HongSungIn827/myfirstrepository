#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int main(void)
// {
//     int dan = 2, num = 1;

//     while (dan<10)
//     {
//         num=1;
//         while (num<10)
//         {
//             printf("%d*%d=%d \t",dan,num,dan*num);
//             num++;
//         }
//         dan++;
        
//     }
//     return 0;
    
// }


//  첫번째 시도
// int main(void)
// {
//     int dan = 2;
//     int num = 1;

//     while (dan<10)
//     {
//         num=1;
//         while (num<10)
//         {
//             printf("%d*%d=%d \n",dan,num,dan*num);
//             num++;
//         }
//         dan++;
        
//     }
//     return 0;
    
// }

//  do-while 문
// int main(void)
// {
//     int num=0,total=0;
//     do
//     {
//         printf("input number: ");
//         scanf("%d",&num);
//         total+=num;
//     } while (num!=0);
//     printf("sum:%d \n",total);
    
// }

//  while 문
// int main(void)
// {
//     int num,total;

//     while (num!=0)
//     {
//         printf("input number:");
//         scanf("%d",&num);
//         total+=num;
//     }
//     printf("sum: %d",total);
    
// }


//  첫번째 시도
// int main(void)
// {
//     int num = 2;
//     int total = 0;

//     do
//     {
//         total+=num;
//         num=num+2;
//     } while (num<=100);

//     printf("sum: %d",total);
//     return 0;
// }

//  두번째 시도
// int main(void)
// {
//     int even = 2;
//     int total = 0;

//     do
//     {
//         total+=even;
//         even=even+2;
//     } while (even<=100);
//     printf("sum: %d",total);
    
// }


//  구구단 while문 중첩
// int main(void)
// {
//     int dan = 2;
//     int num = 1;

//     while (dan<10)
//     {
//         num = 1;
//         while (num<10)
//         {
//             printf("%d*%d=%d \t",dan,num,dan*num);
//             num++;
//         }
//         dan++;
        
//     }
//     return 0;
    
// }

//  구구단 do-while문 
// int main(void)
// {
//     int dan = 2;
//     int num = 1;

//     do
//     {
//         num = 1;
//         do
//         {
//             printf("%d*%d=%d \t",dan,num,dan*num);
//             num++;
//         } while (num<10);
//         dan++;
//         printf("\n");
//     } while (dan<10);
//     return 0;
    
// }


//  while문 vs for문 비교

//  while 문 사용
// int main(void)
// {
//     int num = 0;
//     while (num<3)
//     {
//         printf("Seize the day! \n");
//         num++;
//     }
//     return 0;  
// }

//  for 문 사용
// int main(void)
// {

//     for (int num = 0; num < 3; num++)
    
//         printf("Seize the day!\n");
    
//     return 0;
    
    
// }


// p165_for문_예제1번
// int main(void)
// {
//     int num;
//     int total;
//     int i =1;

//     printf("input number:");
//     scanf("%d",&num);

//     for ( i = 1; i <= num; i++)   // <===== for문 실행순서 : 1.초기식 -> 2.조건식 -> 3.출력문 -> 4.증감식 
//     {
//         total+=i;
//     }
//     printf("sum: %d",total);
//     return 0;
    
// }

// 입력하는 정수의 평균값 구하기
// 조건1. 음수를 입력했을 때 평균값에서 제외하고 종료한다.


// int main(void)
// {
//     int num;
//     int total = 0;
//     int i = 0;

//     for ( i = 0; 0 <= num; i++)
//     {
//         total+=num;
//         printf("input number:");
//         scanf("%d",&num);
//         //total+=num; 
//         i++;
//     }
//     printf("mean: %d",total/i);
//     return 0;
    
// }


//  Wed.27.Jan.2021

int doA(int *a)
{
    *a = 20;
    printf("doA a value a = %d \n",a);
    printf("doA a point value *a = %d \n",*a);
}
void main()
{
    int a = 10;
    int num1 = 0, num2 = 0;

    printf("main address is\n");
    printf("&a = %d\n",&a);
    printf("\n");
    printf("main value is\n");
    printf("a = %d\n",a);
    printf("\n");

    doA(&a);
}



