#define _CRT_SECURE_NO_WARNINGS 1
/*�������
����һ���������飬��ɶ�����Ĳ���
ʵ�ֺ���init() ��ʼ������Ϊȫ0
ʵ��print()  ��ӡ�����ÿ��Ԫ��
ʵ��reverse()  �����������Ԫ�ص����á�
Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
*/
#include<stdio.h>
void reverse(int *arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}

}
void init(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		arr[i] = 0;
}
void print(int *arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
		printf("%d  ", arr[i]);
}

int main()
{
	int arr[] = { 2,1,6,8,5,4,9,0,3,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("����Ϊ:");
	print(arr, sz);
	printf("\n");
	reverse(arr, sz);
	printf("��������:");
	print(arr, sz);
	printf("\n");
	init(arr,sz);
	printf("��ʼ��ȫ0����:");
	print(arr, sz);
	printf("\n");
	return 0;
}
