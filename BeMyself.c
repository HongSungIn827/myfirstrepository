#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#undef random
#define random() ((double)rand()/(RAND_MAX+1))

//	while �ݺ��� ����
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


//	while�� ������
/*
int main(void)
{
	int dan = 0, num=1;
	printf("�� ��? ");
	scanf_s("%d", &dan,9);

	while (num<10)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
*/


// �迭
/*
int main(void)
{
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for (i = 0; i < 5; i++)
		sum += arr[i];

	printf("�迭��ҿ� ����� ���� ��: %d \n", sum);
	return 0;

}
*/

// �迭 
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

// �迭
/*
int main(void)
{
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ��: %d \n", sizeof(arr1));
	printf("�迭 arr2�� ũ��: %d \n", sizeof(arr2));
	printf("�迭 arr3�� ũ��: %d \n", sizeof(arr3));

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


//	p260 ����1��
/*
int main(void)
{
	int arr[5];
	int max, min, sum, i;

	for ( i = 0; i < 5; i++)
	{
		printf("�Է�: ");
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
	printf("�ִ밪: %d \n", max);
	printf("�ּҰ�: %d \n", min);
	printf("����: %d \n", sum);
	return 0;
}
*/




// �迭
/*
int main(void)
{
	char str[] = "Good morning!";
	printf("�迭 strd�� ũ��: %d \n", sizeof(str));
	printf("�� ���� ������ ���: %c \n", str[13]);
	printf("�� ���� ������ ���: %d \n", str[13]);

	str[12] = '?';
	printf("���ڿ� ���: %s \n", str);
	return 0;
}
*/


// �迭
/*
int main(void)
{
	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf_s("%s", str,50);
	printf("�Է� ���� ���ڿ�: %s \n", str);

	printf("���� ���� ���: ");
	while (str[idx] !='\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	return 0;
}
*/


// �������� ���α׷�
// ��� : ö��,����,����,ö��
// ���� : ����,����,����,��ȸ,����

//���� ���� ���α׷� - �л� ��ȣ ������ �迭�� ����
//���� ������ �л� ����ü �迭�� ����
//�ִ� �л� ���� ����
//�Է� ������ ���� ���� ó�� ����



// �������� ���α׷�
/*
#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NLEN    20 //�ִ� �̸� ����
#define MAX_SUBJECT 3 //���� ��
typedef struct {//�л� ����ü ����
    char name[MAX_NLEN + 1];//�̸�
    int num; //��ȣ
    int scores[MAX_SUBJECT];//��,��,�� ����
}Student;


const char* stitles[MAX_SUBJECT] = { "����","����","����" };

#define MAX_STUDENT 10//�ִ� �л� ��

Student stues[MAX_STUDENT];

void Initialize();//�л� ������ �ʱ�ȭ
void Run();
int main(void)
{

    Initialize();//�л� ������ �ʱ�ȭ
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
            stues[i].scores[s] = -1; //������ -1�� ����
        }
    }
}

int SelectMenu();//�޴� ��� �� ����
void AddStudent();//�л� ������ �Է�
void RemoveStudent();//�л� ������ ����
void FindStudent();//�л� �˻�
void ListStudent();//��� ����
void Run()
{
    int key = 0;
    while ((key = SelectMenu()) != 0)//������ �޴��� 0�� �ƴϸ� �ݺ�
    {
        switch (key)//������ Ű�� ���� ��� ����
        {
        case 1: AddStudent(); break;
        case 2: RemoveStudent(); break;
        case 3: FindStudent(); break;
        case 4: ListStudent(); break;
        default: printf("�߸� �����Ͽ����ϴ�.\n"); break;
        }
    }
    printf("���α׷� ����\n");
}

int SelectMenu()
{
    int key = 0;
    printf("���� ���� ���α׷� 0:����\n");
    printf("1: �л� ������ �Է� 2: �л� ������ ���� 3: �л� �˻� 4: ��� ���� \n");
    scanf_s("%d", &key);
    return key;
}

int IsAvailNum(int num);//��ȿ�� ��ȣ���� �Ǻ�
int IsAvailScore(int score);//��ȿ�� �������� �Ǻ�
void AddStudent()
{
    int num = 0;
    Student* stu = 0;
    int s = 0;

    printf("�߰��� �л� ��ȣ(1~%d): ", MAX_STUDENT);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//��ȿ�� ��ȣ�� �ƴ� ��
    {
        printf("������ ��� �л� ��ȣ�Դϴ�.\n");
        return;
    }

    if (stues[num - 1].num)//�̹� ��ȣ�� ������ ������ ��
    {
        printf("�̹� �߰��Ͽ����ϴ�\n");
        return;
    }

    //stues���� 1�� �л� �����͸� �����ϴ� �޸� �ּ�
    //���� stues+(num-1)�� num�� �л� �����͸� �����ϴ� �޸� �ּ�
    stu = stues + (num - 1);
    stu->num = num;
    printf("�̸�: ");
    scanf_s("%s", stu->name, sizeof(stu->name));

    for (s = 0; s < MAX_SUBJECT; s++)
    {
        printf("%s ����:", stitles[s]);
        scanf_s("%d", stu->scores + s);

        if (IsAvailScore(stu->scores[s]) == 0)//��ȿ�� ������ �ƴ� ��
        {
            stu->scores[s] = -1;
            printf("�Է��� ������ ��ȿ���� �ʾƼ� %s ������ �Է� ó������ �ʾҽ��ϴ�.\n", stitles[s]);
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

    printf("������ �л� ��ȣ(1~%d): ", MAX_STUDENT);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//��ȿ�� ��ȣ�� �ƴ� ��
    {
        printf("������ ��� �л� ��ȣ�Դϴ�.\n");
        return;
    }

    if (stues[num - 1].num == 0)//��ȣ�� ������ ���°� �ƴ� ��
    {
        printf("�����Ͱ� �����ϴ�.\n");
        return;
    }

    stu = stues + (num - 1);
    strcpy_s(stu->name, sizeof(stu->name), "");
    stu->num = 0;
    for (s = 0; s < MAX_SUBJECT; s++)
    {
        stu->scores[s] = -1;
    }

    printf("�����Ͽ����ϴ�.\n");
}
void ViewStuData(Student* stu);
void FindStudent()
{
    int num = 0;
    Student* stu = 0;
    int s = 0;

    printf("�˻��� �л� ��ȣ(1~%d): ", MAX_STUDENT);
    scanf_s("%d", &num);

    if (IsAvailNum(num) == 0)//��ȿ�� ��ȣ�� �ƴ� ��
    {
        printf("������ ��� �л� ��ȣ�Դϴ�.\n");
        return;
    }

    if (stues[num - 1].num == 0)//��ȣ�� ������ ���°� �ƴ� ��
    {
        printf("�����Ͱ� �����ϴ�.\n");
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

    printf("%4s %10s ", "��ȣ", "�̸�");
    for (s = 0; s < MAX_SUBJECT; s++)
    {
        printf("%4s ", stitles[s]);
    }
    printf("������ -1�� ���� ���Է�\n");

    for (i = 0; i < MAX_STUDENT; i++)
    {
        if (stues[i].num)
        {
            ViewStuData(stues + i);
        }
    }
}
*/

// �������� ���α׷�
/*
int total(int kor, int eng, int math);
double average(int tot);
void print_title(void);

int main(void)
{
    int kor, eng, math, soc, sci = 0;
    int tot;
    double res;

    printf("���� �Է�: \n");
    scanf("%d %d %d %d %d", &kor, &eng, &math,&soc,&sci);
    printf("=======<����ǥ>============== \n");
    print_title();
    printf("���� ���� ���� ��ȸ ���� ���� ��� \n");
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

    printf("����,����,����,��ȸ,���� ������ �Է��ϼ���. \n");
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



//  �� ���� ���� ����ϴ� �Լ� 1.
/*
void add(int, int);

int main()
{
    int a, b;
    printf("�� ���� ������ �Է��ϼ���. \n");
    scanf("%d %d", &a, &b);
    add(a, b);
}

void add(int x, int y)
{
    printf("%d+%d=%d", x, y, x + y);
}
*/


//  �� ���� ���� ����ϴ� �Լ� 2.
/*
int add(int, int);

int main()
{
    int a, b, sum;
    printf("�� ���� ������ �Է��ϼ���. \n");
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
    printf("%d!���� %d�̴�.", a, fact(a));
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
    printf("�� ���� ������ �Է��ϼ���.");
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
    printf("�� ���� ������ �Է��ϼ���.");
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

    printf("\n < �ζǹ�ȣ �ڵ� ��±� >\n");
    do
    {
        printf("\n1�� �̻��� ������ ������ �ּ���.");
        printf("\n�� ���� �ζǿ����� �����Ͻðڽ��ϱ�? ");

        scanf("%d", &credit);

        if (credit<1)
        {
            printf("�ùٸ� ������ �Է��ϼ���.");
        }
    } while (credit<1);

    printf("\n1. ���� �� ���Դ� ����(12��) ������� �ڵ�����ϱ�. \n");
    printf("\n2. ��������n�� + �߳����� ��������m��. \n");
    printf("\n3. (�����) 1~45�� �� �󵵼��� ���� ���� ����. \n");

    printf("\n\n < ���ϴ� ��¹� �����ϱ� > : ");

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
            printf("���� ���� ���ڸ� �Է��ϼ���: ");
            
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

    printf("/// ������ �ִ밪 = %d /// \n", RAND_MAX);

    for (iCount = 0; iCount < 6; iCount++)
        printf("���� ��%d=%d\n", iCount, rand());

    return 0;
}
*/


// rand*srand �Լ�
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

//  1 ~ 45 �� ���� 6�� ���
/*
int main(void)
{
    srand(time(NULL));
    for (int i = 0; i < 6; i++)
        printf("%d\n", rand() % 44 + 1);
    return 0;
}
*/




// while ��
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



// �����ϱ�
/*
int main(void)
{
    int dan = 0;
    int num = 1;

    printf("���� �Է��ϼ���: \n");
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

