#define _CRT_SECURE_NO_WARNINGS 1
/*
��������
��ҵ����
������A�е����ݺ�����B�е����ݽ��н�����������һ����
*/
#include<stdio.h>
void print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d  ", arr[i]);
}
void exchange_arr(int *arr1, int *arr2, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,9 };
	int arr2[] = { 2,3,5,6,8,9,0,1 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	printf("arr1: ");
	print(arr1, sz);
	printf("\n");
	printf("arr2: ");
	print(arr2, sz);
	printf("\n");
	exchange_arr(arr1, arr2, sz);
	printf("������:");
	printf("\n");
	printf("arr1: ");
	print(arr1, sz);
	printf("\n");
	printf("arr2: ");
	print(arr2, sz);
	return 0;
}