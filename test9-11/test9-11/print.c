#define _CRT_SECURE_NO_WARNINGS 1
//��ӡ���������Ƶ�����λ��ż��λ
//��ҵ����
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
#include<stdio.h>
int main()
{
	int num = 0;
	printf("������:");
	scanf("%d", &num);
	int a[32] = { 0 };
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			a[i] = 1;
		else
			a[i] = 0;

	}
	printf("ż��λ:\n");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n����λ:\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	return 0;
}