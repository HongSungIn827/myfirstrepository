#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <stdlib.h>

/*
int main(void) {
	int num1 = 2, num2 = 4, num3 = 6;
	num1 += 3;
	num2 *= 4;
	num3 %= 5;
	printf("Result: %d.%d,%d \n", num1, num2, num3);
	return 0;
}
*/

/*
int main(void) {
	int num1 = +2;
	int num2 = -4;

	num1 = -num1;
	printf("num1: %d \n", num1);
	num2 = -num2;
	printf("num2: %d \n", num2);
	return 0;
}*/

/*
int main(void) {
	int num1 = 12;
	int num2 = 12;

	printf("num1: %d \n", num1);
	printf("num1++: %d \n", num1++);
	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);
	printf("++num2: %d \n", ++num2);
	printf("num2: %d \n", num2);
	return 0;
}
*/

/*
int main(void) {
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%d*%d=%d \n", num1, num2, num1 * num2);
	printf("%d/%d�� ��=%d \n", num1, num2, num1 / num2);
	printf("%d/%d�� ������=%d \n", num1, num2, num1 % num2);
	return 0;
}
*/

/*
int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2;

	printf("num1: %d \n", num1);
	printf("num2: %d \n", num2);
	return 0;
}
*/


/*
int main(void) {
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == num2);
	result2 = (num1 <= num2);
	result3 = (num1 > num2);

	printf("result1: %d \n", result1);
	printf("result2: %d \n", result2);
	printf("result3: %d \n", result3);
	return 0;
}
*/

/*
int main(void) {
	int num1 = 10;
	int num2 = (num1--) + 2;

	printf("num1: %d",num1);
	printf("num2: %d",num2);
	return 0;
}
*/

/*
int main(void) {
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 < 12 || num2>12);
	result3 = (!num1);

	printf("result1: %d", result1);
	printf("result2: %d", result2);
	printf("result3: %d", result3);
	return 0;
}
*/


/*
int main(void) {
	int result;
	int num1, num2;

	printf("���� one: ");
	scanf("%d", &num1);
	printf("���� two: ");
	scanf("%d", &num2);

	result = num1 + num2;
	printf("%d+%d=%d \n", num1, num2, result);
	return 0;
}
*/

/*
int main(void) {
	int result;
	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d+%d+%d=%d \n", num1, num2, num3, result);
	return 0;
}
*/



/*
int main(void) {
	int num1, num2;
	printf("�� ���� ������ �Է��ϼ���.");
	scanf("%d %d", &num1, &num2);
	printf("%d-%d=%d \n",num1,num2,num1 - num2);
	printf("%d*%d=%d \n", num1, num2, num1 * num2);
	return 0;
}
*/

/*
int main(void) {
	int num1, num2, num3;
	printf("�� ���� ������ �Է��ϼ���.");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%d*%d+%d=%d", num1,num2,num3,num1*num2+num3);
	return 0;
}
*/


/*
int main(void) {
	int num1, num2;
	printf("�� ���� ������ �Է��ϼ���.");
	scanf("%d %d", &num1, &num2);
	printf("%d/%d=%d", num1, num2, num1 / num2);
	printf("%d/%d=%d", num1, num2,num1 % num2);
	return 0;
}
*/


/*
int main(void) {
	int num1, num2, num3;
	int result;
	printf("�� ���� ������ �Է��ϼ���.");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("���� ���: %d \n", result);
	return 0;
}
*/

/*
int main(void) {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d \n", sizeof(ch));
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));
	
	printf("char�� ũ��: %d \n", sizeof(char));
	printf("int�� ũ��: %d \n", sizeof(int));
	printf("long�� ũ��: %d \n", sizeof(long));
	printf("long long�� ũ��: %d \n", sizeof(long long));
	printf("float�� ũ��: %d \n", sizeof(float));
	printf("double�� ũ��: %d \n", sizeof(double));
	return 0;
}
*/

/*
int main(void) {
	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area);
	return 0;
}
*/


/*
int main(void) {
	char ch1 = 65;
	printf("%d \n", ch1);
	printf("%c%c%c%c%c%c",83,117,110,103,73,110);
}
*/

/*
int main(void) {
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));
	return 0;
}
*/

/*
int main(void) {
	double num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2;
	printf("������ ���: %lf \n", divResult);
	return 0;
}
*/


/*
int main(void) {
	float num1;
	double num2;
	long double num3;
	printf("�Ǽ� �Է�1(eǥ�������): ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %f \n", num1);

	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf("%lf", &num2);
	printf("�Էµ� �Ǽ� %f \n", num2);

	printf("�Ǽ� �Է�3(eǥ�������): ");
	scanf("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf \n", num3);
	return 0;
}
*/


/* ------------------------------------------------------

int main(void) {
	int cur = 2;
	int is = 0;

	while (cur < 10) {
		is = 1;
		while (is < 10) {
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}
*/


/*
int main(void)
{
	int num = 0;
	do
	{
		printf("Hello world! \n");
		num++;
	} while (num < 3);
}
*/

/*
int main(void)
{
	int num = 0;
	while (num < 3)
	{
		printf("Hello world! \n");
		num++;
	}
}
*/


/*
int main(void)
{
	int num = 1;
	while (num < 6)
	{
		printf("%d��° apple! \n" ,num);
		num++;
	}
	num = 1;
	//printf("\n")

	while (num<4)
	{
		printf("%d��° banana! \n", num);
		num++;
	}
	num = 1;
	//printf("\n")

	while (num<11)
	{
		printf("%d��° coffe! \n", num);
		num++;
	}
	return 0;
}
*/


/*
int main(void)
{
	int dan = 0, num = 1;
	printf("�� ��? ");
	scanf("%d", &dan);

	while (num < 10)
	{
		printf("%d*%d*=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
*/

/*
int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d*%d=%d \n", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}
*/

/*
int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			printf("%d*%d=%d\t", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}
*/


/*
int main(void)
{
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1;
		while (is < 10)
		{
			scanf("%d", cur);
			printf("%d*%d=%d wn", cur, is, cur * is);
			is++;
		}
		cur++;
	}
	return 0;
}
*/

/*
int main(void)
{
	int cur = 0, num = 1;
	printf("�� ��?");
	scanf("%d", &cur);

	while (num < 6)
	{
		printf("%d*%d=%d \n", cur, num, cur * num);
		num++;
	}
	return 0;
}
*/

/*
int main(void)
{
	int total = 0, num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}while (num!= 0);
	printf("�հ�: %d \n", total);
	return 0;
}
*/

/*
int main(void)
{
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0���� %d���� �������: %d \n", num, total);
	return 0;
}
*/

/*
int main(void)
{
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &input);
		num++;
	}
	printf("���: %f \n", total / (num - 1));
	return 0;
}
*/

/*
int main(void)
{
	int a, b, total = 0;
	printf("�ΰ��� ������ �Է��Ͻÿ�.");
	scanf("%d %d", &a,&b);

	for (total = 0; a<b; a++)
		total += a;
	printf("�������:%d \n", total);
	return 0;
}
*/


/*
int main(void)
{
	int result;
	int a = 1, b = 2;

	printf("�� ���� ������ �Է��Ͻÿ�. \n");
	scanf("%d %d", &a, &b);

	result = a + b;
	printf("%d+%d=%d \n", a, b, result);
	
	return 0;
}
*/


/*
int main(void)
{
	int dan = 0, num = 1;
	printf("���ڸ� �Է��ϼ���. ");
	scanf("%d", &dan);

	while (num < 8)
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num++;
	}
	return 0;
}
*/


/*
int main(void)
{
	int dan = 0, num = 1;
	printf("�� ��?");
	scanf("%d", &dan);

	do
	{
		printf("%d*%d=%d \n", dan, num, dan * num);
		num++;
	} while (num < 8);
}
*/



/*
int main(void)
{
	int dan = 0, num = 1;
	printf("�� ��?");
	scanf("%d", &dan);

	for (dan = 0; dan < 10; dan++)
	{
		for (num = 1; num < 8; num++)
			printf("%d*%d=%d \n", dan, num, dan * num);
	}
	return 0;
}
*-------------------------------------------------------------------------------/


/*
int main(void)
{
	int a, b, c = 1;
	printf("�� �Է��ϱ�. \n");
	scanf("%d", &a);
	printf("���� �Է��ϱ�. \n");
	scanf("%d", &b);
	printf("\n");

	while (c <= b)
	{
		printf("%d*%d=%d \n", a, c, a * c);
		printf("\n");
		c++;
	}
	return 0;
}
*/



/*
int main(void)
{
	int a, b, c = 1;
	printf("�� �Է��ϱ�. \n");
	scanf("%d", &a);
	printf("���� �Է��ϱ�. \n");
	scanf("%d", &b);
	printf("\n");

	do
	{
		printf("%d*%d=%d \n", a, c, a * c);
		printf("\n");
		c++;
	} while (c <= b);
}
*/



/*
int main(void)
{
	int a, b, c = 1;
	printf("�� �Է��ϱ�. \n");
	scanf("%d", &a);
	printf("���� �Է��ϱ�. \n");
	scanf("%d", &b);
	printf("\n");

	for (c=1; c <= b; c++)
	{
		printf("%d*%d=%d \n", a, c, a * c);
		printf("\n");
	}
}
------------------Fri--------15----------Jan----------2021---------*/


/*
int main(void)
{
	int num;
	
	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 �Ǵ� 4�� ���: %d \n", num);
	}
	return 0;
}
*/

/*
int main(void)
{
	int opt, num1, num2, result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����? ");
	scanf("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("���: %d \n", result);
	return 0;
}
*/

/*=========================================����===========================================
int main()
{
	int a, b;
	char c;

	printf("ù��° ���ڸ� �Է��ϼ���. \n");
	scanf("%d", &a);
	printf("�����ڸ� �Է��ϼ��� \n");
	scanf(" %c", &c);
	printf("�ι�° ���ڸ� �Է��ϼ���. \n");
	scanf("%d", &b);

	switch (c)
	{
	case '+':printf("%d+%d=%d \n", a, b, a + b);
		break;
	case '-':printf("%d-%d=%d \n", a, b, a - b);
		break;
	case '*':printf("%d*%d=%d \n", a, b, a * b);
		break;
	case '/':
		if (b == 0)
		{
			printf("0���� ������ �����ϴ� \n");
		}
		else
		{
			printf("%d/%d=%d \n", a, b, a / b);

		}
		break;
	default: printf("�˼� ���� �������Դϴ� \n");
	}
	return 0;
}
===============================================================================================*/





/*
int main()
{
	int num1,num2;
	char func;

	printf("ù��° ���ڸ� �Է��ϼ���. \n");
	scanf("%d", &num1);
	printf("�����ڸ� �Է��ϼ��� \n");
	scanf(" %c", &func);
	printf("�ι�° ���ڸ� �Է��ϼ���. \n");
	scanf("%d", &num2);

	switch (func)
	{
	case '+':printf("%d+%d=%d \n", num1, num2, num1 + num2);
		break;
	case '-':printf("%d-%d=%d \n", num1, num2, num1 - num2);
		break;
	case '*':printf("%d*%d=%d \n", num1, num2, num1 * num2);
		break;
	case '/':
		if (num2 == 0)
		{
			printf("0���� ������ �����ϴ� \n");
		}
		else
		{
			printf("%d/%d=%d \n", num1, num2, num1 / num2);

		}
		break;
	default: printf("�˼� ���� �������Դϴ� \n");
	}
	return 0;
}
*/







/*
int main(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("���밪: %d \n", abs);
	return 0;
}
*/

/*
int main(void)
{
	int sum = 0, num = 0;
	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;
		num++;
	}
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}
*/

/*
int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20 ; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			break;
		printf("%d ", num);
	}	
	printf("end! \n");
	return 0;
}
*/


/*
int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	if (num > 0)
		printf("�Է� ���� 0���� ũ��. \n");
	if(num==0)
		printf("�Է� ���� 0�̴�. \n");
	
	return 0;
}
*/

/*
int main(void)
{
	int score;
	printf("���� �Է�: ");
	scanf("%d", &score);

	if (score>=90)
		printf("Score: A \n");
	if (90>score>=80)
		printf("Score: B \n");
	if (80>score>=70)
		printf("Score: C \n");
	if (70>score>=60)
		printf("Score: D \n");
	if (60>score)
		printf("Score: F \n");
		return 0;
}
*/


/*---------------------------------need to edit--------------------------
int main(void)
{
	int num = 100;
	int stack = 0;

	for (int i =2;i<=num;i++)
	{
		stack = 0;
		for (int j = 2; j <= num; j++)
		{
			if (i % j == 0)
				stack++;
		}
		if (stack == 1)

			printf("%d�� ������ �Ҽ��� %�̴� \n", num, i);
	}
	return 0;
}
------------------------------------------------------------------------------*/

/*
int main(void)
{
	int num;
	printf("���� �Է�: ");
	scanf("%d", &num);
	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	else
		printf("�Է� ���� 0���� ���� �ʴ�. \n");
	return 0;
}
*/


/*
int main(void)
{
	int a, b;
	printf("�� ���� ������ �Է��ϼ���. \n");
	scanf("%d %d", &a, &b);

	if (a > b)
		printf("%d-%d=%d \n", a, b, a - b);
	else if(a < b)
		printf("%d-%d=%d \n", b, a, b - a);
	return 0;
}
*/

/*
int main(void)
{
	int sum = 0;
	int num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;
		num++;
	}
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
	return 0;
}
*/

/*
int main(void)
{
	int num;
	printf("start! ");

	for (num = 1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
	return 0;
}
*/


/*
int main(void)
{
	char sel;
	printf("M ����,A ����,E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case 'M':case 'm':
		printf("Morning \n");
		break;
	case 'A':case 'a':
		printf("Afternoon \n");
		break;
	case 'E':case 'e':
		printf("Evening \n");
		break;
	}
	return 0;
}
*/

/*
	
int main(void)
{
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	return 0;
}
*/

/*
int Add(int num1, int num2)
{
	return num1 + num2;
}
int main(void)
{
	int result;
	result = Add(3, 4);
	printf("�������1: %d \n", result);
	result = Add(5, 8);
	printf("�������2: %d \n", result);
	return 0;
}
*/

/*
int Add(int num1, int num2)
{
	return num1 + num2;
}
void ShowAddResult(int num)
{
	printf("���� ��� ���: &d \n", num);
}
int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}
void HowToUseThiPro(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}
int main(void)
{
	int result, num1, num2;
	HowToUseThisPro();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}
*/

/*
int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("������� ���: %d \n", num);
}

int ReadNum(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}
*/


/*
int NumberCompare(int num1, int num2);

int main(void)
{
	printf("3�� 4�߿��� ū ���� %d �̴�. \n", NumberCompare(3, 4));
	printf("7�� 2�߿��� ū ���� %d �̴�. \n", NumberCompare(7, 2));
	return 0;
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
*/


/*
int SimpleFuncOne(void)
{
	int num = 10;
	num++;
	printf("SimpleFuncOne num: %d \n", num);
	return 0;
}

int SimpleFuncTwo(void)
{
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1 & num2: %d %d \n", num1, num2);
	return 0;
}

int main(void)
{
	int num = 17;
	SimpleFuncOne();
	SimpleFuncOne();
	printf("main num: %d \n", num);
	return 0;
}
*/


/*
int main(void)
{
	int cnt;
	for ( cnt = 0; cnt < 3; cnt++)
	{
		int num = 0;
		num++;
		printf("%d��° �ݺ�, �������� num�� %d. \n", cnt + 1, num);
	}
	if (cnt==3)
	{
		int num = 7;
		num++;
		printf("if�� ���� �����ϴ� �������� num�� %d. \n", num);
	}
	return 0;
}
*/

/*
int main(void)
{
	int num = 1;

	if (num==1)
	{
		int num = 7;
		num += 10;
		printf("if�� �� �������� num: %d \n", num);
	}
	printf("main �Լ� �� �������� num: %d \n", num);
	return 0;
}
*/


/*
void Add(int val);
int num;

int main(void)
{
	printf("num: %d \n", num);
	Add(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void Add(int val)
{
	num += val;
}
*/


/*
void Recursive(int num)
{
	if (num <= 0)
		return;
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
	
}
	int main(void)
	{
		Recursive(3);
		return 0;
	}
*/


/*
int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial(n - 1);
}

int main(void)
{
	printf("1!=%d \n", Factorial(1));
	printf("2!=%d \n", Factorial(2));
	printf("3!=%d \n", Factorial(3));
	printf("4!=%d \n", Factorial(4));
	printf("9!=%d \n", Factorial(9));
	return 0;
}
*/



// 2�� n���� ���ϴ� �Լ�


/*
int function(int n, int result)
{
	if (n == 0)
		return result;
	result *= 2;
	function(n - 1, result);
}

void main()
{
	int n;
	printf("���� �Է�: ");
	scanf("%d", &n);

	printf("2�� %d���� %d \n", n, function(n,1));
}
*/


int main(void)
{
	int num = 0;

	while (num<5)
	{
		printf("Hello world! %d \n", num);
		num++;
	}
	return 0;
}








