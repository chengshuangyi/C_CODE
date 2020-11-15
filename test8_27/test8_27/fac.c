#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fac(int n)
{
	int i = 1;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret =ret* i;
	}
	return ret;
}
int main()
{
	int n = 0;
	printf("ÊäÈëÇó½×³ËµÄn:");
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d", ret);
	return 0;
}