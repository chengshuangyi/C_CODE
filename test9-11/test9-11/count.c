#define _CRT_SECURE_NO_WARNINGS 1
//ͳ�ƶ�������1�ĸ���
//��ҵ����
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("�����룺");
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("��������1�ĸ���:%d\n", count);
//	return 0;
//}
int main()
{
	int num = 0;
	printf("�����룺");
	scanf("%d", &num);
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("��������1�ĸ���:%d", count);
	return 0;
}