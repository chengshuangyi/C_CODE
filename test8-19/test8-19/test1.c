#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��9�ĸ���
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
int main()
{
	int num = 0;
	int count = 0;
	for (num = 1; num <= 100; num++)
	{
		if (num % 10 == 0)
			count++;
		if (num / 10 == 9)
			count++;
	}
	printf("%d", count);
	return 0;
}