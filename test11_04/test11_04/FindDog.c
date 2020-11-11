#define _CRT_SECURE_NO_WARNINGS 1
//找单身狗
//作业内容
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
#include<stdio.h>
void FindDog(int num[], int n[2], int sz)
{
	int i = 0;
	int ret = 0;
	//把数组num[]中所有数字进行异或。得到不同的两个数字的异或结果
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ num[1];
	}
	//寻找异或结果二进制位中从低开始首次出现1的位置，并记录在pos中
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
		//第pos位为1进行异或
		if (((num[i] >> pos) & 1) == 1)
		{
			n[1] ^= num[i];
		}
		//第pos位为0进行异或
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