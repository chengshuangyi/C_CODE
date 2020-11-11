#define _CRT_SECURE_NO_WARNINGS 1
//冒泡排序支持升序降序
//作业内容
//void bubble_sort(int* a, int n, int(*p_compreae)(int, int)
#include<stdio.h>
int great(int x1, int x2)
{
	return x1 > x2 ? 1 : 0;
}
int less(int x1, int x2)
{
	return x1 < x2 ? 1 : 0;
}
void bubble_sort(int *a, int n,int (*p_cmp)(int,int))
{
	int i = 0;
	for (i = 1; i < n ; i++)
	{
		int j = 0;
		for (j = 0; j < n - i; j++)
		{
			if (p_cmp(a[j],a[j+1]))
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 1,0,4,2,5,6,3,9,8,4 };
	int len = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr, len,great);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
