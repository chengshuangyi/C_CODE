#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWS ROW+2
#define COLS COL+2

#define ROW 9
#define COL 9

#define num 10

//声明函数
//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char board[ROWS][COLS], int row, int col);
//扫雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);

