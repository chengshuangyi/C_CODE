#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Digitsum(int n)
{
	int count = 0;
	if (n >9)
	{
		return (n%10) + Digitsum(n / 10);
	}
	else
		return n;
	
}
int main()
{
	int n = 0;
	printf(" ‰»În:");
	scanf("%d", &n);
	int ret = Digitsum(n);
	printf("%d", ret);
	return 0;
}