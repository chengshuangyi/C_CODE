#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
/*
������
��ҵ����
1. �����������Ϸ����
2. �������������ƺʹ������һƪ����
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
	char board[ROW][COL] = { 0 };     //�����ʼ��Ӧ��Ϊ�ո�
	Initboard(board, ROW, COL);       //��ʼ������Ϊ�ո�
	displayboard(board, ROW, COL);    //��ӡ����

	while (1)
	{
		PlayerMove(board, ROW, COL);              //�����
		displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);            //������
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
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();                   //��ʼ��Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");      //�˳���Ϸ
			break;
		default:
			printf("������ѡ��:\n");   
			break;
		}

	} while (input);
	return 0; 
}
