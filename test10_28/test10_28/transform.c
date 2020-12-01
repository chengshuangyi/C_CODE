#define _CRT_SECURE_NO_WARNINGS 1
//十六进制转十进制
#include<string.h>
#include<stdio.h>
#include<math.h>
int transfrom(char a[], int len)
{
	int sum = 0;
	for (int i = 0; i<len; i++)
	{
		if (a[i] >= 'a'&&a[i] <= 'f')
		{
			a[i] = a[i] - 'a' + 10;
		}
		else if (a[i] >= '1'&&a[i] <= '9')
		{
			a[i] = a[i] - '1' + 1;
		}
		int sum_sub = 0;
		sum_sub = a[i] * pow(16, (len - 1 - i));
		sum += sum_sub;
	}
	return sum;
}
int main()
{
	char a[8] = "19abf";
	int len = strlen(a);
	printf("%d\n", transfrom(a, len));
}