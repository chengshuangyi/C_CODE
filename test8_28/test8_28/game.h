#define _CRT_SECURE_NO_WARNINGS 1
//ͷ�ļ�
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//��������
//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void displayboard(char board[ROW][COL], int row, int col);
//�����
void PlayerMove(char board[ROW][COL], int row, int col);
//������
void ComputerMove(char board[ROW][COL], int row, int col);
