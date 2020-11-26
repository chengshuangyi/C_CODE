#define _CRT_SECURE_NO_WARNINGS 1
//打印整数二进制的奇数位和偶数位
//作业内容
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#include<stdio.h>
int main()
{
	int num = 0;
	printf("请输入:");
	scanf("%d", &num);
	int a[32] = { 0 };
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			a[i] = 1;
		else
			a[i] = 0;

	}
	printf("偶数位:\n");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n奇数位:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	return 0;
}