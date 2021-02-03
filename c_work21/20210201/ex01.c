#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//  도전 2번
// void main(){
//     int arr[100];
//     int cnt = 0;
//     int input_number = 0;
//     int rema_number = 0;

//     printf("정수 입력: ");
//     scanf("%d",&input_number);

//     printf("input_number = %d\n", input_number);

//     while (input_number > 1)
//     {
//         rema_number = input_number%2;

//         arr[cnt] = rema_number;
//         cnt++;

//         int temp_value =  input_number/2;
//         if (temp_value<2)
//         {
//             arr[cnt] = temp_value;
//             cnt++;
//             break;
//         }
//         input_number = temp_value;
//     }

  
//     int i = 0;
//     for ( i = cnt-1; i>-1; i--)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
// }

// 도전 3번



// void main(){
//     int a = 10;
//     int *p = &a;
//     int **pp = &p;

//     int ***ppp = &pp;

//     printf("a = %d\t",a);
//     printf("&a = %d\n",&a);

//     printf("p = %d\t",p);
//     printf("*p = %d\t",*p);
//     printf("**p = %d\n",&p);

//     printf("pp = %d\t",pp);
//     printf("*pp = %d\t",*pp);
//     printf("**pp = %d\t",**pp);
//     printf("&pp = %d\t",&pp);
// }






void swap1(int *pnum1, int*pnum2){
    printf("pnum1 = %d pnum2 = %d\n",pnum1,pnum2);
    int *temp = pnum1;
    pnum1 = pnum2;
    pnum2 = temp;
    printf("pnum1 = %d pnum2 =%d\n",pnum1,pnum2);
}

void swap2(int **ppnum1,int **ppnum2){
    printf("ppnum1 = %d ppnum2 =%d\n",ppnum1,ppnum2);
    printf("*ppnum1 = %d *ppnum2 =%d\n",*ppnum1,*ppnum2);

    int *temp = *ppnum1;
    *ppnum1 = *ppnum2;
    *ppnum2 = temp;
    printf("*ppnum1 = %d *ppnum2 =%d\n",ppnum1,ppnum2);
    printf("*ppnum1 = %d *ppnum2 =%d\n",*ppnum1,*ppnum2);


}

// void main(){
//     int num1 = 10, num2 = 20;
//     int *p1 = &num1, *p2 = &num2;

//     // printf("num1 = %d, num2 = %d\n",num1,num2);
//     // swap1(p1,p2);
//     // printf("num1 = %d, num2 = %d\n",num1,num2);

//     printf("*p1 = %d, *p2 = %d\n",*p1,*p2);
//     printf("*p1 = %d, p2 = %d\n",p1,p2);
//     printf("&p1 = %d, &p2 = %d\n",&p1,&p2);


//     swap1(&p1,&p2);
//     printf("*p1 = %d, *p2 = %d\n",*p1,*p2);
//     printf("*p1 = %d, p2 = %d\n",p1,p2);
//     printf("&p1 = %d, &p2 = %d\n",&p1,&p2);
// }


// int MaxAndMin(){

// }

// int main(){
//     int *maxPtr;
//     int *minPtr;
//     int arr[5];

//     MaxAndMin();
// }

int main(void){
    double num = 3.14;
    double *ptr = &num;
    double **dptr = &ptr;
    double *ptr2;

    printf("%p %p \n",ptr,*dptr);
    printf("%g %g \n",num,**dptr);
    // ptr2 = *dptr;
    // *ptr2 = 10.99;
    // printf("%9g %9g \n",num,**dptr);
    return 0;
}

