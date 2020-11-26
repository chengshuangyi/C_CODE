#define _CRT_SECURE_NO_WARNINGS 1
//求两个数二进制中不同位的个数
//作业内容
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入:a,b\n");
	scanf("%d %d", &a, &b);
	int i = 0;
	int c = a ^ b;
	int count = 0;
	for (i= 0; i < 32; i++)
	{
		if (((c >> i) & 1) == 1)
			count++;

	}
	printf("%d", count);
	return 0;
}
