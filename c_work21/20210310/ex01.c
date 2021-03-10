#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int a = 3;
    int b = 8;
    int sum = 0;

    for ( a = 3; a < 1000; a++)
    {
        if (a%3==0)
        {
            sum+=a;
        }     
    }
    printf("%d",sum);
    return 0;
    
    
}