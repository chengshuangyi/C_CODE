#define _CRT_SECURE_NO_WARNINGS 1
//���������������в�ͬλ�ĸ���
//��ҵ����
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������:a,b\n");
	scanf("%d %d", &a, &b);
	int i = 0;
	int c = a ^ b;
	int count = 0;
	for (i= 0; i < 32; i++)
	{
		if (((c >> i) & 1) == 1)
			count++;

	}
	printf("%d", count);
	return 0;
}
