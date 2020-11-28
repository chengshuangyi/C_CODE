#define _CRT_SECURE_NO_WARNINGS 1
//调整奇数偶数顺序
//作业内容
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数,来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
#include<stdio.h>
void adjust(int *arr,int num)
{
	int i = 0;
	int *left = arr;
	int *right = arr + num - 1;
	while (left < right)
	{
		if ((left < right)&&(*left & 1))
		{
			left++;
		}
		if ((left < right)&&(!(*right & 1)))
		{
			right--;
		}
		else
		{
			int temp = *left;
			*left = *right;
			*right = temp;
			left++;
			right--;
		}
	}
}
int main()
{
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10,12,13,15,16,17 };*/
	int arr[] = { 1,3,5,7,9};
	int num = sizeof(arr) / sizeof(arr[0]);
	
	adjust(arr,num);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}
