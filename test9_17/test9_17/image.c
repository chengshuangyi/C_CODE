#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str[100] = " ";
	int mid = 6;
	int i = 0;
	int j = 0;
	int row = 0;
	for (row = 0; row < 7; row++)
	{
		for (i = mid, j = mid; (i >= mid - row) && (j <= mid + row); i--, j++)
		{
			str[i] = '*';
			str[j] = '*';
		}
		for (i = 0, j = 12; i < (mid-row) && j >= (mid+row); i++, j--)
		{
			str[i] = ' ';
			str[j] = ' ';
			
		}
		printf("%s\n", str);
	}
	for (row = 5; row >= 0; row--)
	{
		for (i = mid, j = mid; (i >= row) && (j <=row); i--, j++)
		{
			str[i] = '*';
			str[j] = '*';
		}
		for (i = 0, j = 12; i < (mid - row) && j >= (mid + row); i++, j--)
		{
			str[i] = ' ';
			str[j] = ' ';
		}
		printf("%s\n", str);
	}
	return 0;
}