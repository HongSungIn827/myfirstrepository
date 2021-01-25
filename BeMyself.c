#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#undef random
#define random() ((double)rand()/(RAND_MAX+1))

//	while 반복문 응용
/*
int main(void)
{
	int num = 4;

	while (num<5 && num>0)
	{
		printf("Hello world! %d \n", num);
		--num;
	}
	return 0;
}
*/


//	while문 구구단
/*
int main(void)
{
	int dan = 0, num=1;
	printf("몇 단? ");
	scanf_s("%d", &dan,9);

	while (num<10)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
*/


// 배열
/*
int main(void)
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("배열요소에 저장된 값의 합: %d \n", sum);
	return 0;

}
*/

// 배열 
/*
int main(void)
{
	int arr[5] = { 1,2,3,4,5, }, i;

	for (i = 0; i < 5; i++)
	{
		printf("%d", arr[i]);
	}
}
*/

// 배열
/*
int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("배열 arr1의 크기: %d \n", sizeof(arr1));
	printf("배열 arr2의 크기: %d \n", sizeof(arr2));
	printf("배열 arr3의 크기: %d \n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int);
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	for (i = 0; i < ar1Len; i++)
		printf("%d", arr1[i]);
	printf("\n");


	for (i = 0; i < ar2Len; i++)
		printf("%d", arr2[i]);
	printf("\n");


	for (i = 0; i < ar3Len; i++)
		printf("%d", arr3[i]);
	printf("\n");
	return 0;
}
*/


//	p260 문제1번
/*
int main(void)
{
	int arr[5];
	int max, min, sum, i;

	for ( i = 0; i < 5; i++)
	{
		printf("입력: ");
		scanf_s("%d", &arr[i],5);
	}
	max = min = sum = arr[0];
	for ( i = 1; i < 5; i++)
	{
		sum += arr[i];
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("최대값: %d \n", max);
	printf("최소값: %d \n", min);
	printf("총합: %d \n", sum);
	return 0;
}
*/




// 배열
/*
int main(void)
{
	char str[] = "Good morning!";
	printf("배열 strd의 크기: %d \n", sizeof(str));
	printf("널 문자 문자형 출력: %c \n", str[13]);
	printf("널 문자 문자형 출력: %d \n", str[13]);

	str[12] = '?';
	printf("문자열 출력: %s \n", str);
	return 0;
}
*/


// 배열
/*
int main(void)
{
	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str,50);
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while (str[idx] !='\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}
*/


// 성적관리 프로그램
// 사람 : 철수,영희,영수,철희
// 과목 : 국어,영어,수학,사회,과학

//성적 관리 프로그램 - 학생 번호 순으로 배열에 보관
//전역 변수로 학생 구조체 배열을 선언
//최대 학생 수는 고정
//입력 오류에 관한 예외 처리 없음



// 성적관리 프로그램
/*
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NLEN    20 //최대 이름 길이
#define MAX_SUBJECT 3 //과목 수
typedef struct {//학생 구조체 정의
    char name[MAX_NLEN + 1];//이름
    int num; //번호
    int scores[MAX_SUBJECT];//국,영,수 성적
}Student;


const char* stitles[MAX_SUBJECT] = { "국어","영어","수학" };

#define MAX_STUDENT 10//최대 학생 수

Student stues[MAX_STUDENT];

void Initialize();//학생 데이터 초기화
void Run();
int main(void)
{

    Initialize();//학생 데이터 초기화
    Run();

    return 0;
}


void Initialize()
{
    int i = 0;
    int s = 0;

    for (i = 0; i < MAX_STUDENT; i++)
    {
        for (s = 0; s < MAX_SUBJECT; s++)
        {
            stues[i].scores[s] = -1; //성적을 -1로 설정
        }
    }
}

int SelectMenu();//메뉴 출력 및 선택
void AddStudent();//학생 데이터 입력
void RemoveStudent();//학생 데이터 삭제
void FindStudent();//학생 검색
void ListStudent();//목록 보기
void Run()
{
    int key = 0;
    while ((key = SelectMenu()) != 0)//선택한 메뉴가 0이 아니면 반복
    {
        switch (key)//선택한 키에 따라 기능 수행
        {
        case 1: AddStudent(); break;
        case 2: RemoveStudent(); break;
        case 3: FindStudent(); break;
        case 4: ListStudent(); break;
        default: printf("잘못 선택하였습니다.\n"); break;
        }
    }
    printf("프로그램 종료\n");
}

int SelectMenu()
{
    int key = 0;
    printf("성적 관리 프로그램 0:종료\n");
    printf("1: 학생 데이터 입력 2: 학생 데이터 삭제 3: 학생 검색 4: 목록 보기 \n");
    scanf_s("%d", &key);
    return key;
}

int IsAvailNum(int num);//유효한 번호인지 판별
int IsAvailScore(int score);//유효한 성적인지 판별
void AddStudent()
{
    int num = 0;
    Student* stu = 0;
    int s = 0;

    printf("추가할 학생 번호(1~%d): ", MAX_STUDENT);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//유효한 번호가 아닐 때
    {
        printf("범위를 벗어난 학생 번호입니다.\n");
        return;
    }

    if (stues[num - 1].num)//이미 번호를 설정한 상태일 때
    {
        printf("이미 추가하였습니다\n");
        return;
    }

    //stues에는 1번 학생 데이터를 관리하는 메모리 주소
    //따라서 stues+(num-1)은 num번 학생 데이터를 관리하는 메모리 주소
    stu = stues + (num - 1);
    stu->num = num;
    printf("이름: ");
    scanf_s("%s", stu->name, sizeof(stu->name));

    for (s = 0; s < MAX_SUBJECT; s++)
    {
        printf("%s 성적:", stitles[s]);
        scanf_s("%d", stu->scores + s);

        if (IsAvailScore(stu->scores[s]) == 0)//유효한 성적이 아닐 때
        {
            stu->scores[s] = -1;
            printf("입력한 성적이 유효하지 않아서 %s 성적은 입력 처리하지 않았습니다.\n", stitles[s]);
        }
    }
}
int IsAvailNum(int num)
{
    return (num >= 1) && (num <= MAX_STUDENT);
}
int IsAvailScore(int score)
{
    return (score >= 0) && (score <= 100);
}
void RemoveStudent()
{
    int num = 0;
    Student* stu = 0;
    int s = 0;

    printf("삭제할 학생 번호(1~%d): ", MAX_STUDENT);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//유효한 번호가 아닐 때
    {
        printf("범위를 벗어난 학생 번호입니다.\n");
        return;
    }

    if (stues[num - 1].num == 0)//번호를 설정한 상태가 아닐 때
    {
        printf("데이터가 없습니다.\n");
        return;
    }

    stu = stues + (num - 1);
    strcpy_s(stu->name, sizeof(stu->name), "");
    stu->num = 0;
    for (s = 0; s < MAX_SUBJECT; s++)
    {
        stu->scores[s] = -1;
    }

    printf("삭제하였습니다.\n");
}
void ViewStuData(Student* stu);
void FindStudent()
{
    int num = 0;
    Student* stu = 0;
    int s = 0;

    printf("검색할 학생 번호(1~%d): ", MAX_STUDENT);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//유효한 번호가 아닐 때
    {
        printf("범위를 벗어난 학생 번호입니다.\n");
        return;
    }

    if (stues[num - 1].num == 0)//번호를 설정한 상태가 아닐 때
    {
        printf("데이터가 없습니다.\n");
        return;
    }

    stu = stues + (num - 1);
    ViewStuData(stu);
}
void ViewStuData(Student* stu)
{
    int i = 0;
    int s = 0;

    printf("%4d %10s ", stu->num, stu->name);
    for (s = 0; s < MAX_SUBJECT; s++)
    {
        printf("%4d ", stu->scores[s]);
    }
    printf("\n");
}
void ListStudent()
{
    int i = 0;
    int s = 0;

    printf("%4s %10s ", "번호", "이름");
    for (s = 0; s < MAX_SUBJECT; s++)
    {
        printf("%4s ", stitles[s]);
    }
    printf("성적이 -1인 곳은 미입력\n");

    for (i = 0; i < MAX_STUDENT; i++)
    {
        if (stues[i].num)
        {
            ViewStuData(stues + i);
        }
    }
}
*/

// 성적관리 프로그램
/*
int total(int kor, int eng, int math);
double average(int tot);
void print_title(void);

int main(void)
{
    int kor, eng, math, soc, sci = 0;
    int tot;
    double res;

    printf("점수 입력: \n");
    scanf("%d %d %d %d %d", &kor, &eng, &math,&soc,&sci);
    printf("=======<성적표>============== \n");
    print_title();
    printf("국어 영어 수학 사회 과학 총점 평균 \n");
    print_title();
    tot = total(kor, eng, math, soc, sci);
    res = average(tot);
    printf("%5d%5d%5d%5d%5d%5d %.1lf\n", kor, eng, math, soc, sci, tot, res);
    return 0;
}

int total(int kor, int eng, int math, int soc, int sci)
{
    int temp;
    temp = kor + eng + math + soc + sci;
    return temp;
}

double average(int tot)
{
    double temp;
    temp = (double)tot / 5;
    return temp;
}

void print_title(void)
{
    int i;
    for ( i = 0; i < 40; i++)
    {
        printf("-");
    }
    printf("\n");
}
*/


/*
int main(void)
{
    int arr[5][6];
    int sum = 0, i, j;

    printf("국어,영어,수학,사회,과학 점수를 입력하세요. \n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &arr[i][j]);
    printf("\n");
}
*/



/*
void prt();

int main()
{
    prt();

    prt();

    prt();
}

void prt()
{
    printf("Slow but steady always win the game. \n");
}
*/



//  두 수의 합을 출력하는 함수 1.
/*
void add(int, int);

int main()
{
    int a, b;
    printf("두 개의 정수를 입력하세요. \n");
    scanf("%d %d", &a, &b);
    add(a, b);
}

void add(int x, int y)
{
    printf("%d+%d=%d", x, y, x + y);
}
*/


//  두 수의 합을 출력하는 함수 2.
/*
int add(int, int);

int main()
{
    int a, b, sum;
    printf("두 개의 정수를 입력하세요. \n");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    printf("%d+%d=%d", a, b, sum);
}

int add(int x, int y)
{
    return x + y;
}
*/


/*
int fact(int);

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d!값은 %d이다.", a, fact(a));
}

int fact(int a)
{
    int i, re = 1;
    for (i = a; i > 0; i--)
        re *= i;
    return re;
}
*/

/*
double div(int, int);

int main()
{
    int a, b;
    double re;
    printf("두 개의 정수를 입력하세요.");
    scanf("%d %d", &a, &b);
    re = div(a, b);
    printf("%d/%d=%f", a, b, re);
    return 0;
}

double div(int a, int b)
{
    return(double)a / b;
}
*/



/*
int Add(int num1, int num2)
{
    return num1 + num2;
}

int Min(int num1, int num2)
{
    return num1 - num2;
}

int Mul(int num1, int num2)
{
    return num1 * num2;
}
int Div(int num1, int num2)
{
    return num1 / num2;
}

int main(void)
{   
    int num1, num2 = 0;
    // int result;
    printf("두 개의 정수를 입력하세요.");
    scanf("%d %d", &num1, &num2);
    printf("%d+%d=%d \n", num1, num2, num1 + num2);
    printf("%d-%d=%d \n", num1, num2, num1 - num2);
    printf("%d*%d=%d \n", num1, num2, num1 * num2);
    printf("%d/%d=%d \n", num1, num2, num1 / num2);
    return 0;
}
*/


/*

void lotto_top12(int credit);
void lotto_12_45(int credit);
void lotto_percent(int credit);
int percent();

int main(void)
{
    srand(time(NULL));

    int credit;

    printf("\n < 로또번호 자동 출력기 >\n");
    do
    {
        printf("\n1개 이상의 용지를 구입해 주세요.");
        printf("\n몇 개의 로또용지를 구매하시겠습니까? ");

        scanf("%d", &credit);

        if (credit<1)
        {
            printf("올바른 수량을 입력하세요.");
        }
    } while (credit<1);

    printf("\n1. 가장 잘 나왔던 숫자(12개) 기반으로 자동출력하기. \n");
    printf("\n2. 랜덤숫자n개 + 잘나오는 랜덤숫자m개. \n");
    printf("\n3. (통계기반) 1~45의 볼 빈도수에 따른 랜덤 숫자. \n");

    printf("\n\n < 원하는 출력법 선택하기 > : ");

    int x;

    do
    {
        scanf("%d", &x);

        /*
        if (x == 1)
            lotto_top12(credit);
        else if (x == 2)
            lotto_12_45(credit);
        else if (x == 3)
            lotto_percent(credit);
        else
            printf("범위 안의 숫자를 입력하세요: ");
            
    } while (x < 1 || x>3);
    

    printf("\n===========================================\n\n");
}

void lotto_12_45(int credit)
{
    int ball[12] = { 10,12,16,17,18,21,34,38,29,42,43 };
    int num[6];
    int limit;
    int cnt = 0;
    int jnum = 0;

    printf("\n============================================\n\n");


}
*/

/*
int rand(void);

int main()
{
    int iCount;

    printf("/// 난수의 최대값 = %d /// \n", RAND_MAX);

    for (iCount = 0; iCount < 6; iCount++)
        printf("난수 열%d=%d\n", iCount, rand());

    return 0;
}
*/


// rand*srand 함수
/*
int main(void)
{
    srand(time(NULL));
    for (int i = 0; i < 5; i++)
        printf("%d\n", rand());
    return 0;
}
*/

/*
int main(void)
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
        printf("%d\n", rand());
    return 0;
}
*/






// < Project Assignment >

//  1 ~ 45 중 정수 6개 출력
/*
int main(void)
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
        printf("%d\n", rand() % 44 + 1);
    return 0;
}
*/




// while 문
/*
int main(void)
{
    int num = 1;
    int num1 = 4;

    while (num<5 && num>0)
    {
        printf("%d Slow but steady always win the game! %d\n", num,num1);
        num++;
        num1--;
    }
    return 0;
}
*/

int main(void)
{
    int n = 0;
    
    while (n<5)
    {
        printf("Hello world!",&n);
        n++;
    }
    return 0;
}



// 질문하기
/*
int main(void)
{
    int dan = 0;
    int num = 1;

    printf("단을 입력하세요: \n");
    scanf("%d", &dan);

    while (num<10)
    {
        printf("%d*%d=%d \n", dan, num, dan * num);
        num++;
    }
    return 0;
}
*/

// int desc_num[] = { 12,43,18,39,38,21,42,16,34,45,10,19,13,28,33,3,17,36,15,24,31,14,41,2,6,11,27,30,44,5,9,22,26,7,32,1,4,8,23,29,35,25,37,40,20 };

