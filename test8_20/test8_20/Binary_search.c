#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ���
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ���
#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int num = 0;
	printf("�������֣�");
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
			printf("�ҵ��ˣ��±���%d", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ�����");

	return 0;
}