#define _CRT_SECURE_NO_WARNINGS 1
/*���Ͼ���
��ҵ����
��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
Ҫ��ʱ�临�Ӷ�С��O(N)*/

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
		printf("���ҵ�%d,λ��Ϊ:%d,%d",Search, i, j);
	}
	else
	{
		printf("û�ҵ�");
	}
	return 0;
}