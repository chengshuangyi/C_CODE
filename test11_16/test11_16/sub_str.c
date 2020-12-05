#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[8000] = { 0 };
	scanf("%s", arr);
	long long int n = sizeof(arr) / sizeof(arr[0]);
	long long int c = 0;
	long long int ch = 0;
	long long int chn = 0;
	long long int i = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 'C')
		{
			c++;
		}
		else if (arr[i] == 'H')
		{
			ch += c;
		}
		else if (arr[i] == 'N')
		{
			chn += ch;
		}
	}
	printf("%lld\n", chn);
	return 0;
}