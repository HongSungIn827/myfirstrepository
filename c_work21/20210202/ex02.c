#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void main(){
//     int arr[3][3];

//     printf("전체 사이즈 sizeof(arr) = %d\n",sizeof(arr));

//     printf("전체 사이즈 sizeof(arr[0]) = %d\n",sizeof(arr[0]));
//     printf("전체 사이즈 sizeof(arr[1]) = %d\n",sizeof(arr[1]));
//     printf("\n");

//     printf("arr의 주소값 = %d\n",arr);
//     printf("arr[0]의 주소값 = %d\n",arr[0]);
//     printf("&arr[0][0]의 주소값 = %d\n",&arr[0][0]);
//     printf("\n");


//     printf("arr의 주소값 = %d\n",arr+1);
//     printf("arr[1]의 주소값 = %d\n",arr[1]);
//     printf("&arr[1][0]의 주소값 = %d\n",&arr[1][0]);
//     printf("\n");


//     printf("arr2의 주소값 = %d\n",arr+2);
//     printf("arr[2]의 주소값 = %d\n",arr[2]);
//     printf("&arr[2][0]의 주소값 = %d\n",&arr[2][0]);

// }

// void main(){
//     int arr[2][3];
//     int brr[2][3];

//     printf("arr[0]의 주소값 = %d\n",arr);
//     printf("arr+1의 주소값 = %d\n",arr+1);
//     printf("arr+2의 주소값 = %d\n",arr+2);

//     printf("\n");
//     printf("brr[0]의 주소값 = %d\n",brr);
//     printf("brr+1의 주소값 = %d\n",brr+1);

//     int crr[10];
//     int *p = crr;

//     int (*pa)[3] =arr;           // 12증가
//     int (*ppa)[2] = brr;         // 8증가
// }


// void main(){
//     int arr1[2][2] = {
//         {1,2},{3,4}
//     };
//     int arr2[3][2] = {
//         {1,2},{3,4},{5,6}
//     };
//     int arr3[4][2] = {
//         {1,2},{3,4},{5,6},{7,8}
//     };

//     int (*ptr)[2];
//     int i;
//     ptr = arr1;
//     printf("**start 2,2 arr1 **\n");
//     for ( i = 0; i < 2; i++)
//     {
//         printf("%d %d \n",ptr[i][0],ptr[i][1]);
//     }
//     ptr = arr2;
//     printf("**start 3,2 arr1 **\n");
//     for ( i = 0; i < 3; i++)
//     {
//         printf("%d %d \n",ptr[i][0],ptr[i][1]);
//     }
//     ptr = arr3;
//     printf("**start 4,2 arr1 **\n");
//     for ( i = 0; i < 4; i++)
//     {
//         printf("%d %d \n",ptr[i][0],ptr[i][1]);
//     }

    
// }

// void main(){
//     int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
//     int arr2d[2][3] = {1,2,3,4,5,6};

//     int *a[4] = {&num1,&num2,&num3,&num4};
//     int (*brr)[3] = arr2d;

//     int i = 0;
//     printf("포인터 배열 출력 시작 \n");
//     for ( i = 0; i < 4; i++)
//     {
//         printf("num%d = %d\n",i,*a[i]);
//     }
//     printf("\n");
//     printf("배열 포인터 출력 시작 \n");
//     for ( i = 0; i < 2; i++)
//     {
//         printf("%d %d %d \n",brr[i][0],brr[i][1],brr[i][2]);
//     }
    
    

// }

int main(void){
    int a[3][2] = {{1,2},{3,4},{5,6}};

    printf("a[0]: %p \n",a[0]);
    printf("*(a+0): %p \n",*(a+0));

    printf("\n");

    printf("a[1]: %p \n",a[1]);
    printf("*(a+1): %p \n",*(a+1));

    printf("\n");

    printf("a[2]: %p \n",a[2]);
    printf("*(a+2): %p \n",*(a+2));

    printf("\n");

    printf("%d, %d \n",a[2][1], (*(a+2))[1]);
    printf("%d, %d \n",a[2][1], *(a[2]+1));
    printf("%d, %d \n",a[2][1], *(*(a+2)+1));

}