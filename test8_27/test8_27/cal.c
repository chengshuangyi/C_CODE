#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cal(int n, int k)
{
	int ret = 1;
	if (k > 1)
	{
		return n * cal(n, k - 1);
	}
	else
		return n;
}
int main()
{
	int n = 0;
	int k = 0;
	printf("«Î ‰»În k:");
	scanf("%d%d", &n, &k);
	int ret = cal(n, k);
	printf("%d", ret);
	return 0;
}