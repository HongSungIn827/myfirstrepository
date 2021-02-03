#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int main(void)
// {
//     int total = 0;
//     int i , num ;
//     printf("input number:");
//     scanf("%d",&num);

//     for ( i = 0; i < num+1; i++)
//     {
//         total+=i;
//     }
//     printf("total: %d",total);
//     return 0;
    
// }

// int main(void)
// {
//     int num; 
//     int total;

//     while (num!=0)
//     {
//         printf("input number:");
//         scanf("%d",&num);
//         total+=num;
//     }
//     printf("total: %d",total);
//     return 0;
    
// }


// int main(void)
// {
//     double total=0;
//     double input=0;
//     int i = 0;

//     for ( i = 0; input>=0; i++)
//     {
//         total+=input;                            // <----- 위치 질문
//         printf("input number: ");
//         scanf("%lf",&input);
//         //total+=input;                          // <----- 위치 질문 (순차적으로 실행되기 때문에 이 행에 입력했다. 그러나 오류 발생)
//     }
//     printf("mean: %lf",total/(i-1));
//     return 0;  
// }

// 두번째 시도

// int main(void)
// {
//     int start, end, result;

//     printf("input two numbers: ");
//     scanf("%d %d",&start,&end);

//     for ( result = 0; start <= end; start++)
//     {
//         result+=start;
//     }
//     printf("result: %d \n",result);
//     return 0;
    
// }



// 세번째 시도

// int main(void)
// {
//     int start, end, result;

//     printf("input two numbers: ");
//     scanf("%d %d",&start,&end);

//     for ( result = 0; start <= end; start++)
//     {
//         result+=start;
//     }
//     printf("result: %d",result);
//     return 0;
    
// }



// 네번째 시도

// int main(void)
// {
//     int start, end, result;

//     printf("input two numbers: ");
//     scanf("%d %d",&start,&end);

//     for ( result = 0; start <= end; start++)
//     {
//         result+=start;
//     }
//     printf("result: %d",result);
//     return 0;
// }

// 첫번째 시도

// int main(void)
// {
//     int start = 1;
//     int num, result;

//     printf("input number: ");
//     scanf("%d",&num);

//     for ( start = 1; start <= num; start++)
//     {
//         result*=start;
//     }
//     printf("result: %d",result);
//     return 0;    
// }


// 첫 번째 시도
// int main(void)
// {
//     int dan = 2;
//     int num = 1;
//     int result;

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

// 두번째 시도
// int main(void)
// {
//     int dan = 2;
//     int num = 1;
//     int result;

//     while (dan<10)
//     {
//         num = 1;
//         while (num<10)
//         {
//             printf("%d*%d=%d \t",dan,num,dan*num);
//             num++;
//         }
//         printf("\n");                                      // <---- edit and look better
//         dan++;
        
//     }
//     return 0;
    
// }


// 첫번째 시도
// int main(void)
// {
//     int dan = 2;
//     int num = 1;

//     for ( dan = 2; dan < 10; dan++)
//     {
//         for ( num = 1; num < 10; num++)
//         {
//             printf("%d*%d=%d \t",dan,num,dan*num);
//         }
//         printf("\n");                                 // <---- edit and look better
//     }
//     return 0;    
// }



// int main(void)
// {
//     int num;
//     printf("input number: ");
//     scanf("%d",&num);

//     if (num<0)
//     {
//         printf("input number < 0 \n");
//     }

//     if (num>0)
//     {
//         printf("input number > 0 \n");
//     }

//     if (num==0)
//     {
//         printf("input number = 0 \n");
//     }
//     return 0;    
// }



// My First Calculation Program =====================================================
// int main(void)
// {
//     int opt;
//     int plus, min, mul, squ;
//     int num1, num2;

//     printf("Choose the option: ");
//     scanf("%d",&opt);

//     if (opt==1)
//     {
//         printf("input number: ");
//         scanf("%d",&num1);
//         printf("input number: ");
//         scanf("%d",&num2);
//         printf("result:%d+%d=%d",num1,num2,num1+num2);
//     }

//     if (opt==2)
//     {
//         printf("input number: ");
//         scanf("%d",&num1);
//         printf("input number: ");
//         scanf("%d",&num2);
//         printf("result:%d-%d=%d",num1,num2,num1-num2);
//     }

//     if (opt==3)
//     {
//         printf("input number: ");
//         scanf("%d",&num1);
//         printf("input number: ");
//         scanf("%d",&num2);
//         printf("result:%d*%d=%d",num1,num2,num1*num2);
//     }

//     if (opt==4)
//     {
//         printf("input number: ");
//         scanf("%d",&num1);
//         printf("input number: ");
//         scanf("%d",&num2);
//         printf("result:%d/%d=%d",num1,num2,num1/num2);
//     }
//     return 0;    
// }



//  Useful Code For Calculator
// int main(void)
// {
//     int opt;
//     double num1, num2;
//     double result;

//     printf("1.plus 2.minus 3.multiple 4.square \n");
//     printf("option: ");
//     scanf("%d",&opt);

//     printf("input number: ");
//     scanf("%lf",&num1);
//     printf("input number: ");
//     scanf("%lf",&num2);

//     if (opt==1)
//     {
//         result = num1 + num2;
//     }
    
//     if (opt==2)
//     {
//         result = num1 - num2;
//     }
    
//     if (opt==3)
//     {
//         result = num1 * num2;
//     }
    
//     if (opt==4)
//     {
//         result = num1 / num2;
//     }
//     printf("result: %lf",result);
//     return 0;
// }


// 첫번째 시도 
int main(void)
{
    int num3, num4;
    int i = 1;

    for ( i = 1; i < 100; i++)
    {
       
    }
    
}