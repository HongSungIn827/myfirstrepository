#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(){
    char arr[100];
    char brr[100];
    int input_len = 0;
    int i = 0;

    printf("글자입력: ");
    scanf("%s",arr);

    printf("arr = %s\n",arr);

    while(1){
        if(arr[i]=='\0'){
            input_len = i;
            break;
        }
        i++;
    }
    printf("\n입력한 문자열 길이 input_len = %d\n",input_len);

    brr[input_len] = '\0';

    int j = input_len-1;
    for ( i = 0; i < input_len; i++, j--)
    {
        brr[j] = arr[i];
    }

    // for ( i = 0; i < input_len; i++)
    // {
    //     printf("brr[%d] = %c\n",i,brr[i]);
    // }

    int chk =1;
    for ( i = 0; i < input_len; i++)
    {
        if(arr[i] != brr[i]){
            chk = 0;
            printf("회문이 아닙니다.");
            break;
        }
    }
    if(chk){
        printf("회문입니다.");
    }
    
    
    
}