#define _CRT_SECURE_NO_WARNINGS 1
//��������ż��˳��
//��ҵ����
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ������,�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
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
