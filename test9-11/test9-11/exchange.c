#define _CRT_SECURE_NO_WARNINGS 1
//����������������������ʱ������
//��ҵ����
//����������ʱ������������������������
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������:a,b\n");
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);
	return 0;
}