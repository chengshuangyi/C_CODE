#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//打印素数
//写一个代码：打印100~200之间的素数
int main()
{
	int num = 0;
	for (num = 100; num <= 200; num++)
	{
		int i = 0;
		for (i = 2; i <= sqrt(num); i++)
		{
			if (num%i == 0)
				break;
				
		}	
		if (i > sqrt(num))
		{
			printf("%d  ", num);
		}
	}
	return 0;
}
