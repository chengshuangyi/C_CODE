#define _CRT_SECURE_NO_WARNINGS 1
//ʹ��ָ���ӡ��������
//��ҵ����
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
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