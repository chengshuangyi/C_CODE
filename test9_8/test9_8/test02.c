#define _CRT_SECURE_NO_WARNINGS 1
//1. 完成扫雷游戏代码。
//2. 并将扫雷游戏的设计和代码完成一篇博客。
#include"game2.h"

void menu()
{
	printf("************************************\n");
	printf("********     1.开始游戏    *********\n");
	printf("********     0.退出游戏    *********\n");
	printf("************************************\n");
}

void game()
{
	//真正的扫雷过程
	//创建一个二维数组
	//存放布置好的雷
	char mine[ROWS][COLS] = { 0 };
	//布置排查出来的雷
	char show[ROWS][COLS] = { 0 };
	//初始化二维数组
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印
	/*DisplayBoard(mine, ROW, COL)*/; //布置好的雷分布一般不打印
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//1布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//2扫雷
	FindMine(mine,show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//扫雷游戏
			game();
			break;
		case 0:
			//退出游戏
			printf("退出游戏\n");
			break;
		default:
			//重新选择
			printf("输入错误，请重新选择\n");
			break;
		}	
	} while (input);
	return 0;
}
