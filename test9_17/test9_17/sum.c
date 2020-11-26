#define _CRT_SECURE_NO_WARNINGS 1
//计算求和
//作业内容
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
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
	printf("输入a;\n");
	scanf("%d", &a);
	int sum=Sum(a);
	printf("%d\n", sum);
	return 0;
}