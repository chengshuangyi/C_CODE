#define _CRT_SECURE_NO_WARNINGS 1
//��ӡˮ�ɻ���
//��ҵ����
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
#include<stdio.h>
#include<math.h>
int Nar_number(int i)
{
	int a = i % 10;//��λ
	int b = (i / 10) % 10;//��λ
	int c = (i / 100) % 10;//��λ
	int d = (i / 1000) % 10;//ǧλ
	int e = i / 10000;//��λ
	int n = 0;
	int num = i;
	while (num)
	{
		n++;
		num =num / 10;
	}
	if (i == pow(a,n) + pow(b, n) + pow(c, n) + pow(d, n) + pow(e, n))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int count = 0;
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		if (Nar_number(i) == 1)
		{
			printf("%d  ", i);
			count++;
		}
	}
	printf("\n%d\n", count);
	return 0;
}
