#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	printf("输入要求的n:");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}