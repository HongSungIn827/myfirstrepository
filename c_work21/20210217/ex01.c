#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void){
    srand((int)time(NULL));

    int Com = rand()%3+1;
    int Rooney;
    int cnt;

    printf("%d\n",Com);
    printf("1(바위),2(가위),3(보)중 하나 선택: ");
    scanf("%d",&Rooney);

    if (Rooney==1 && Com==2)
    {
        printf("루니가 이겼습니다.");
    }
    else if (Rooney==2 && Com==1)
    {
        printf("컴퓨터가 이겼습니다.");
    }
    else if (Rooney==3 && Com==1)
    {
        printf("루니가 이겼습니다.");
    }
    else if (Rooney==1 && Com==3)
    {
        printf("컴퓨터가 이겼습니다.");
    }
    else if (Rooney==2 && Com==3)
    {
        printf("루니가 이겼습니다.");
    }
    else if (Rooney==3 && Com==2)
    {
        printf("컴퓨터가 이겼습니다.");
    }
    else if (Rooney==Com)
    {
        printf("비겼습니다.");
    }
    return 0;
    
}