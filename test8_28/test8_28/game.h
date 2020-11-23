#define _CRT_SECURE_NO_WARNINGS 1
//头文件
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3

//声明函数
//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
//打印棋盘
void displayboard(char board[ROW][COL], int row, int col);
//玩家走
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑走
void ComputerMove(char board[ROW][COL], int row, int col);
