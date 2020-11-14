#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void mulfor(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
			printf("%d * %d = %2d  ", j, i,j*i);
		printf("\n");
	}
	
}
int main()
{
	int n = 0;
	printf("请输入要打印的乘法表：");
	scanf("%d", &n);
	mulfor(n);
	return 0;
}
