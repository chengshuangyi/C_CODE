#define _CRT_SECURE_NO_WARNINGS 1
/*����һ���������У�KiKi������е��ظ�������ȥ��������ȥ�غ�����д�С�������������
�������� :
��һ�У�����һ������n����ʾ������n��������
�ڶ�������n��������ÿ���������ڵ���1��С�ڵ���1000��������֮���ÿո�ָ���
������� :
ȥ�ز��Ҵ�С�������е��������У�����֮���ÿո�ָ���*/
#include<stdio.h>
int main()
{
	int n = 0;
	int arr[100] = { 0 };
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n -1 ; i++)
	{
		int j = 0;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] != arr[i + 1])
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}