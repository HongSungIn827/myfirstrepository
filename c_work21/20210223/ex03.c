#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

char * ReadUserName(){
    char* name = (char*)malloc(sizeof(char)*30);
    printf("이름을 입력하세요 = ");
    scanf("%s",name);
    return name;
}

void main(){
    char *name1 = ReadUserName();
    char *name2 = ReadUserName();
    printf("*name1 = %s\n",name1);
    printf("*name2 = %s\n",name2);

    free(name1);
    free(name2);
}