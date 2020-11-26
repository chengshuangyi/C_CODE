#define _CRT_SECURE_NO_WARNINGS 1
//使用指针打印数组内容
//作业内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
#include<stdio.h>
void print_arr(int *pr)
{
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		printf("%d  ", *(pr + i));
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	print_arr(arr);
	return 0;
}