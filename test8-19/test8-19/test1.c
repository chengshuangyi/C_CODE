#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//数9的个数
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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