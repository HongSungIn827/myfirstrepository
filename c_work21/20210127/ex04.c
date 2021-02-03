#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void main()
// {
//     int a[3] = {1,2,3};
//     int *p = a;

//     printf("*p = %d\n",*p);
//     printf("*(p+1) = %d\n",*(p+1));
//     printf("*(p+2) = %d\n",*(p+2));

//     printf("\n");

//     printf("p[0] = %d\n",p[0]);
//     printf("p[1] = %d\n",p[1]);
//     printf("p[2] = %d\n",p[2]);
    
// }



void main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;           
    int i;

    printf("*ptr = %d\n",*ptr);
    printf("ptr = %d\n",ptr);
    printf("ptr+1 = %d\n",ptr+1);
    printf("ptr+2 = %d\n",ptr+2);
    printf("ptr+3 = %d\n",ptr+3);
    printf("ptr+4 = %d\n",ptr+4);

    printf("\n");

    for ( i = 0; i < 5; i++)
    {
        *ptr+=2;
        ptr++;
        printf("%d ", arr[i]);
    }
}

