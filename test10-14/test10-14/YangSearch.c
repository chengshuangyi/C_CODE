#define _CRT_SECURE_NO_WARNINGS 1
/*杨氏矩阵
作业内容
有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
要求：时间复杂度小于O(N)*/

#include<stdio.h>
int YangSearch(int arr[5][5], int search, int *i, int *j)
{
	if (search < arr[0][0] || search > arr[4][4])
	{
		return 0;
	}
	int row = 0; 
	int col = 4;
	while (search >= arr[0][0] || search <= arr[4][4])
	{
		if (search == arr[row][col])
		{
			*i = row+1;
			*j = col+1;
			return 1;
		}
		else if (search < arr[row][col])
		{
			col--;
		}
		else if (search > arr[row][col])
		{
			row++;
		}
	}
	return 0;
}
int main()
{
	int arr[5][5] = { {1,4,7,11,15},
	                  {2,5,8,12,19},
	                  {3,6,9,16,22},
	                  {10,13,14,17,24},
	                  {18,21,23,26,30} };
	int Search = 0;
	scanf("%d", &Search);
	int i = 0;
	int j = 0;
	int ret = YangSearch(arr,Search,&i,&j);
	if (ret)
	{
		printf("查找到%d,位置为:%d,%d",Search, i, j);
	}
	else
	{
		printf("没找到");
	}
	return 0;
}