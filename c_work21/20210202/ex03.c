#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int main(void) {
//     int arr[40];
//     double brr[40];
//     float crr[40];


//     printf("%d \n",sizeof(arr));
//     printf("%d \n",sizeof(brr));
//     printf("%d \n",sizeof(crr));

// }


//  내림차순
// int main(void){
//     int arr[5];
//     int sum = 0;
//     int i = 0;

//     arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

//     for ( i = 4; i >= 0 && i < 5; i--)
//     {
//         printf("%d \n",arr[i]);   
//     }
//     return 0;  
// }

int main(void){
    int arr[5] = {1,2,3,4,5};
    int brr[5] = {1,2}; 
    int i = 0;

    for ( i = 0; i < 5; i++)
    {
        printf("%d \n",arr[i]);
        printf("\n");
        printf("%d \n",brr[i]);
    }
    return 0;
    
}

