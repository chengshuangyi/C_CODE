#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������
//����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
int main()
{
	int i = 0;
	float sum = 0;
	float j = 1.0;
	for (i = 1; i <= 100; i++)
	{
		sum += j*(1.0/ i);
		j = -j;
	}
	printf("%f", sum);
	return 0;
}
