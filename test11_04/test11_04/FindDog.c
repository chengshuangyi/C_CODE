#define _CRT_SECURE_NO_WARNINGS 1
//�ҵ���
//��ҵ����
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
#include<stdio.h>
void FindDog(int num[], int n[2], int sz)
{
	int i = 0;
	int ret = 0;
	//������num[]���������ֽ�����򡣵õ���ͬ���������ֵ������
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ num[1];
	}
	//Ѱ�������������λ�дӵͿ�ʼ�״γ���1��λ�ã�����¼��pos��
	int pos = 0;
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		//��posλΪ1�������
		if (((num[i] >> pos) & 1) == 1)
		{
			n[1] ^= num[i];
		}
		//��posλΪ0�������
		else
		{
			n[0] ^= num[i];
		}
	}
}
int main() 
{
	int num[] = { 1,8,4,5,6,3,1,4,3,8 };
	int sz = sizeof(num) / sizeof(num[0]);
	int n[2] = { 0 };
	FindDog(num, n, sz);
	printf("%d %d\n", n[0], n[1]);
	return 0;
}