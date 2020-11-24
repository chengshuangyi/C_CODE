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
	//��ӡ�к�
	for (i = 0; i <= col; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%d ", i);
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);
		printf("\n");
	}

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	//��������겼��
	//�����׵ĸ���
	int count = num;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;       //���óɹ�count--
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
//ɨ����Ϸ����
//1 ���ף�ը����
//2 �ų�������
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col - num)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d%d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x >=1 && x <= row && y>=1 && y <= col)
		{
			//�ж�x,y���괦�Ƿ�����
			if (mine[x][y] == '1')
			{
				printf("���ף��㱻ը���ˣ�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//ͳ��x��y��Χ�м�����
				int count = MineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
	if (win == row * col - num)
	{
		printf("��ϲ�㣡���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}