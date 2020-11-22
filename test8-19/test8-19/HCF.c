#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//最大公约数
//给定两个数，求这两个数的最大公约数

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入两个数字:");
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数%d",b);
//	return 0;
//}

//暴力求解法
int main()
{
	int x = 0;
	int y = 0;
	int min = 0;
	printf("输入两个数:");
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
			printf("最大公约数%d", i);
			break;
		}
	}
	return 0;
}