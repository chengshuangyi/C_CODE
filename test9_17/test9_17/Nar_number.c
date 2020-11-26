#define _CRT_SECURE_NO_WARNINGS 1
//打印水仙花数
//作业内容
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
#include<stdio.h>
#include<math.h>
int Nar_number(int i)
{
	int a = i % 10;//个位
	int b = (i / 10) % 10;//百位
	int c = (i / 100) % 10;//百位
	int d = (i / 1000) % 10;//千位
	int e = i / 10000;//万位
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
