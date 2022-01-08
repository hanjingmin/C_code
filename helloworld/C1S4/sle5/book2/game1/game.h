// 头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 符号的定义
#define ROW 5
#define COL 5


// 函数的声明
// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
// 打印棋盘
void DisplayBoard(char board[ROW][COL],int row, int col);
// 玩家下棋
void PlayerMove(char board[][COL],int row,int col);
// 电脑下棋
void ComputerMove(char board[][COL],int row,int col);
// 判断胜负
char IsWin(char board[ROW][COL],int row,int col);