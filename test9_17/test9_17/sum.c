#define _CRT_SECURE_NO_WARNINGS 1
//�������
//��ҵ����
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
# include<stdio.h>
int Sum(int a)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		sum = sum + a;
		a = a * 10 + a%10;
	}
	return sum;
}
int main()
{
	int a = 0;
	printf("����a;\n");
	scanf("%d", &a);
	int sum=Sum(a);
	printf("%d\n", sum);
	return 0;
}