#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
#include<stdio.h>
//递归
//int EmptyBottle(int x)
//{
//	int ret = x / 2;//空瓶兑换的汽水个数
//	int empty = x / 2 + x % 2;//兑换的汽水和剩下的空瓶个数之和
//	if (empty > 1)
//		return ret + EmptyBottle(empty);
//	else
//		return ret;
//}

//非递归
int EmptyBottle(int x)
{
	int ret = 0;
	while (x > 1)
	{
		ret += x / 2;		//x没有发生改变，用ret记录能够换来汽水的数量
		x = x / 2 + x % 2;	//x剩余空瓶的数量
	}
	return ret;
}


int main()
{
	int x = 20;
	int num = 20 + EmptyBottle(20);
	printf("%d\n", num);
	return 0;
}
