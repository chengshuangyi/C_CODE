#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//杨辉三角
//作业内容
//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
void YangHuiTriangle(int n)
{
	int a[100][100];
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < n; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
		
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n = 5;
	/*scanf("%d\n", &n);*/
	YangHuiTriangle(n);
	return 0;
}
