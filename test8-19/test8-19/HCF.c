#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���Լ��
//���������������������������Լ��

//շת�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("��������������:");
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("���Լ��%d",b);
//	return 0;
//}

//������ⷨ
int main()
{
	int x = 0;
	int y = 0;
	int min = 0;
	printf("����������:");
	scanf("%d %d", &x, &y);
	if (x < y)
		min = x;
	else
		min = y;
	int i = 0;
	for(i=min;i>=1;i--)
	{   
		if ((x%i == 0) && (y%i == 0))
		{
			printf("���Լ��%d", i);
			break;
		}
	}
	return 0;
}