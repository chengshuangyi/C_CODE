#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ����
//��ӡ1000�굽2000��֮�������
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
			printf("%d  ", year);
	}
	return 0;
}