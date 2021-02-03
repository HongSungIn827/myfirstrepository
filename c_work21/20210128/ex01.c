#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//  p299 포인터 연산 문제 풀이

//  문제 1번
// void main(){
//     int arr[5]={1,2,3,4,5};
//     int *p = arr;
//     int i = 0;

//     for ( i = 0; i < 5; i++)
//     {
//         *(p+i) = *(p+i)+2;
//         *(p+i) += 2;
//     }
    

//     for ( i = 0; i < 5; i++)
//     {
//         printf("p[%d] = %d\n",i,p[i]);
//         printf("*(p+%d) = %d\n",i,*(p+i));

//     }
    
// }

//  문제 4번
// void main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int *ptr1 = &arr[0];
//     int *ptr2 = &arr[5];

//     printf("*ptr1:%d\n", arr[0]);
//     printf("*ptr2:%d\n", arr[5]);
//     printf("\n");

//     int i = 0;
//     for(;i<3;i++){
//         int temp = *(ptr1+i);    
//         *(ptr1+i) = *(ptr2-i);
//         *(ptr2-i) = temp;
//     }
//     for ( i = 0; i < 6; i++)
//     {
//         printf("arr[%d] = %d\n",i,arr[i]);
//     }    
// }

//=====================================================================================

// void main(){
//     char a[] = "abc";
//     char *b = "abc";

//     printf("%s %s",a,b);
// }

//=====================================================================================

// void doA(char *p){
//     printf("%s",p);
// }

// void main(){
//     doA("testtest");
// }

//======================================================================================

// void doA(char *arrp[3]){
//     printf("arr[0]=%d\n",arrp[0]);
//     printf("arr[1]=%d\n",arrp[1]);
//     printf("arr[2]=%d\n",arrp[2]);

//     printf("\n");

//     printf("*arrp[0]=%s\n",arrp[0]);
//     printf("*arrp[0]=%s\n",arrp[1]);
//     printf("*arrp[0]=%s\n",arrp[2]);
// }
// void main(){
//     char *arrp[3] = {"aaa","bbb","ccc"};
//     printf("arr[0]=%d\n",arrp[0]);
//     printf("arr[1]=%d\n",arrp[1]);
//     printf("arr[2]=%d\n",arrp[2]);

//     printf("\n");

//     printf("*arrp[0]=%s\n",arrp[0]);
//     printf("*arrp[0]=%s\n",arrp[1]);
//     printf("*arrp[0]=%s\n",arrp[2]);

//     doA(arrp);
// }

//======================================================================================
//p310

// void doA(int copya){
//     printf("copya = %d\n",copya);
//     copya = 20;
//     printf("copya = %d\n",copya);
// }

// void main(){
//     int a = 10;
//     printf("a = %d\n",a);
//     doA(a);
//     printf("a = %d\n",a);
// }


//=====================================================================================

// void doA(int *p){
//     printf("\n");
//     printf("*p=%d\n",*p);
//     printf("\n");
//     *p=20;
// }

// void main(){
//     int arr[3] = {1,2,3};
//     int i = 0;

//     for ( ; i < 3; i++)
//     {
//         printf("arr[%d] = %d\n",i,arr[i]);
//     }

//     doA(arr);
//     doA(&arr[0]);      
//     // 132,133행은 같은 의미                     

//     for ( i=0; i < 3; i++)
//     {
//         printf("arr[%d] = %d\n",i,arr[i]);
//     }
    
    
// }

//======================================================================================

//  p320 문제 1번


// void SquareByValue(){

// }

// void SquareByReference(){

// }

// void main(void){
//     int num;
//     int result;
//     printf("input number:");
//     scanf("number: %d %d",&num,&num);
//     printf("result: %d",num*num);
// }

//======================================================================================

//  문제 2번
// void Swap3(){

// }

// void main(){
//     int num1 = 0, num2 = 0, num3 = 0;
// }

//======================================================================================

//  도전 ! 프로그래밍2 329-333

//  도전 3번

// int main(void){
//     int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//     int even[5] = {2,4,6,8,10};
//     int odd[5] = {1,3,5,7,9};
//     int num;

//     if (num = even)
//     {
//         printf("\n");
//     }else
//     {
//         printf("\n");
//     }
//     return 0;    
// }

//======================================================================================

//  도전 4번 

// char main(void){

// }

//======================================================================================

//  도전 5번





