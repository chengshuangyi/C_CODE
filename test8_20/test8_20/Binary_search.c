#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到
#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int num = 0;
	printf("输入数字：");
	scanf("%d", &num);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < num)
			left = mid + 1;
		else if (arr[mid] > num)
			right = mid - 1;
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到了");

	return 0;
}