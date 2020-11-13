#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//完成上课的猜数字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("*******   1.开始游戏   *********\n");
	printf("*******   0.退出游戏   *********\n");
	printf("********************************\n");
}
void game()
{
	int guess = 0;
	int n = rand() % 100 + 1;  //电脑产生的随机数在1-100之间
	while (1)
	{
		printf("猜数字->");
		scanf("%d", &guess);
		if (guess > n)
			printf("猜大了\n");
		else if (guess < n)
			printf("猜小了\n");
		else
		{
			printf("恭喜你,猜对了!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));    //让电脑产生时刻变化的数字
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//开始猜数字
			game();
			break;
		case 0:
			//退出游戏
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}