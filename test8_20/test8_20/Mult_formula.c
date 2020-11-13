#define _CRT_SECURE_NO_WARNINGS 1
//乘法口诀表
//在屏幕上输出9 * 9乘法口诀表
#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
			printf("%d*%d=%d ", j, i, j*i);
		printf("\n");
	}
	return 0;
}