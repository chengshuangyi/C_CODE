#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求最大值
//求10 个整数中最大值
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (max < arr[i])
		{
			max= arr[i];
		}
	}
	printf("%d", max);
	return 0;
}