#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
/*
三子棋
作业内容
1. 完成三子棋游戏代码
2. 并将三子棋的设计和代码完成一篇博客
*/
void meau()
{
	printf("*********************************\n");
	printf("*******       1.play      *******\n");
	printf("*******       0.exit      *******\n");
	printf("*********************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };     //数组初始化应该为空格
	Initboard(board, ROW, COL);       //初始化棋盘为空格
	displayboard(board, ROW, COL);    //打印棋盘

	while (1)
	{
		PlayerMove(board, ROW, COL);              //玩家走
		displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);            //电脑走
		displayboard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meau();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();                   //开始游戏
			break;
		case 0:
			printf("退出游戏\n");      //退出游戏
			break;
		default:
			printf("请重新选择:\n");   
			break;
		}

	} while (input);
	return 0; 
}
