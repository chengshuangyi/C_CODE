#define _CRT_SECURE_NO_WARNINGS 1
//��������Ϸ
//����ϿεĲ�������Ϸ
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("********************************\n");
	printf("*******   1.��ʼ��Ϸ   *********\n");
	printf("*******   0.�˳���Ϸ   *********\n");
	printf("********************************\n");
}
void game()
{
	int guess = 0;
	int n = rand() % 100 + 1;  //���Բ������������1-100֮��
	while (1)
	{
		printf("������->");
		scanf("%d", &guess);
		if (guess > n)
			printf("�´���\n");
		else if (guess < n)
			printf("��С��\n");
		else
		{
			printf("��ϲ��,�¶���!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));    //�õ��Բ���ʱ�̱仯������
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//��ʼ������
			game();
			break;
		case 0:
			//�˳���Ϸ
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
	} while (input);
	return 0;
}