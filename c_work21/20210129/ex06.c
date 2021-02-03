#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//  p348 문제 1번
// int main()
// {
//     int dan = 2;
//     int num = 1;

//     for ( dan = 2; dan < 5; dan++)
//     {
//         for ( num = 1; num < 10; num++)
//         {
//             printf("%d*%d=%d \t",dan,num,dan*num);
//         }
//         printf("\n");
//     }
//     return 0;
    
// }

//===================================================
//  문제 2번
// int main()
// {
//     int i,j;

//     int arr1[2][4] = {
//         {1,2,3,4},
//         {5,6,7,8}
//     };

//     int arr2[4][2] = {
//         {1,2},
//         {3,4},
//         {5,6},
//         {7,8}
//     };

//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 4; j++)
//         {
//             printf("%d ",arr1[i][j]);
//         }
//         printf("\n");    
//     }
//     printf("\n");

//     for ( i = 0; i < 4; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             printf("%d ",arr2[i][j]);
//         }
//         printf("\n");    
//     }
//     return 0;        
// }

//======================================================
//  문제 3번

// int main()
// {
//     int i,j;
//     int arr[5][5] = {
//         {5,4,6,5,},
//         {3,6,9,3,},
//         {4,8,2,7,},
//         {3,8,9,7,}
//     };
//     for ( i = 0; i < 5; i++)
//     {
//         for ( j = 0; j < 5; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
    
// }

//===================================================================
// p341
// 예제) 프로그램 사용자로부터 층별로 두 가구가 사는 4층짜리 빌라의 가구별
//      거주인원을 수를 입력 받는 예제를 작성하시오.
//===================================================================

// int main(void)
// {
//     int villa[4][2];
//     int popu,i,j;

//     for ( i = 0; i < 4; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             printf("%d층 %d호 인구수: ",i+1,j+1);
//             scanf("%d",&villa[i][j]);
//         }
//     }

//     for ( i = 0; i < 4; i++)
//     {
//         popu = 0;
//         popu += villa[i][0];
//         popu += villa[j][1];
//         printf("%d층 인구수: %d \n",i+1,popu);
//     }
//     return 0;
// }





































// int main(void)
// {
//     int villa[4][2];
//     int popu,i,j;

//     for ( i = 0; i < 4; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             printf("%d층 %d호 인구수: ",i+1,j+1);
//             scanf("%d", &villa[i][j]);
//         }   
//     }

//     for ( i = 0; i < 4; i++)
//     {
//         popu = 0;
//         popu+=villa[i][0];
//         popu+=villa[i][1];
//         printf("%d층 인구수: %d\n",i+1,popu);
//     }
//     return 0;        
// }