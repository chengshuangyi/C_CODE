#define _CRT_SECURE_NO_WARNINGS 1
//统计二进制中1的个数
//作业内容
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
#include<stdio.h>
//int main()
//{
//	int num = 0;
//	printf("请输入：");
//	scanf("%d", &num);
//	int count = 0;
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制中1的个数:%d\n", count);
//	return 0;
//}
int main()
{
	int num = 0;
	printf("请输入：");
	scanf("%d", &num);
	int count = 0;
	while (num)
	{
		count++;
		num = num & (num - 1);
	}
	printf("二进制中1的个数:%d", count);
	return 0;
}