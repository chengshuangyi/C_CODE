#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			board[i][j] = set;
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%d ", i);
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);
		printf("\n");
	}

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	//随机找坐标布置
	//布置雷的个数
	int count = num;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;       //布置成功count--
		}

	}
}

int MineCount(char mine[ROWS][COLS], int x, int y)
{
	int ret = 0;
	ret = mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1]-8*'0';
	return ret;

}
//扫雷游戏结束
//1 踩雷，炸死了
//2 排除所有雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - num)
	{
		printf("请输入要排查的坐标:");
		scanf("%d%d", &x, &y);
		//判断坐标是否合法
		if (x >=1 && x <= row && y>=1 && y <= col)
		{
			//判断x,y坐标处是否是雷
			if (mine[x][y] == '1')
			{
				printf("踩雷，你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//统计x，y周围有几个雷
				int count = MineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标非法\n");
		}
	}
	if (win == row * col - num)
	{
		printf("恭喜你！排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}