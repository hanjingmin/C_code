// 声明库
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 声明常量
#define CNT 10
#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

// 声明函数
void InitBoard(char board[ROWS][COLS],int rows,int cols, char set);
void DisplayBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS] , int row, int col);