#define _CRT_SECURE_NO_WARNINGS 1
//1. ���ɨ����Ϸ���롣
//2. ����ɨ����Ϸ����ƺʹ������һƪ���͡�
#include"game2.h"

void menu()
{
	printf("************************************\n");
	printf("********     1.��ʼ��Ϸ    *********\n");
	printf("********     0.�˳���Ϸ    *********\n");
	printf("************************************\n");
}

void game()
{
	//������ɨ�׹���
	//����һ����ά����
	//��Ų��úõ���
	char mine[ROWS][COLS] = { 0 };
	//�����Ų��������
	char show[ROWS][COLS] = { 0 };
	//��ʼ����ά����
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ
	/*DisplayBoard(mine, ROW, COL)*/; //���úõ��׷ֲ�һ�㲻��ӡ
	DisplayBoard(show, ROW, COL);
	printf("\n");
	//1������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//2ɨ��
	FindMine(mine,show, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//ɨ����Ϸ
			game();
			break;
		case 0:
			//�˳���Ϸ
			printf("�˳���Ϸ\n");
			break;
		default:
			//����ѡ��
			printf("�������������ѡ��\n");
			break;
		}	
	} while (input);
	return 0;
}
