#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//猜名次
//作业内容
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
void Guess_rank()
{
	int A, B, C, D, E;
	for (A = 1; A <= 5; A++)
	{
		for (B = 1; B <= 5; B++)
		{
			for (C = 1; C <= 5; C++)
			{
				for (D = 1; D <= 5; D++)
				{
					for (E = 1; E <= 5; E++)
					{
						if ((A == 3) + (B == 2) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && (D == 3) + (C == 5) == 1 && (E == 4) + (A == 1) == 1)
						{
							if (A*B*C*D*E == 120)
							{
								printf("A = %d, B = %d, C = %d, D = %d, E = %d", A, B, C, D, E);
							}
						}
					}
				}
			}
		}
	}
}
int main()
{
	Guess_rank();
	return 0;
}