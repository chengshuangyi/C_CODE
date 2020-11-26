#define _CRT_SECURE_NO_WARNINGS 1
//交换两个变量（不创建临时变量）
//作业内容
//不允许创建临时变量，交换两个整数的内容
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入:a,b\n");
	scanf("%d %d", &a, &b);
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("a=%d,b=%d", a, b);
	return 0;
}