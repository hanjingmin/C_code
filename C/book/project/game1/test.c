#define CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"
void menu()
{
    printf("*******************************\n");
    printf("**********  1. play  **********\n");
    printf("**********  0. exit  **********\n");
    printf("*******************************\n");
}

void game()
{
    // 存储数据 - 二维数组
    char board[ROW][COL];
    char res = 0;       // 获取结果状态

    // 初始化棋盘 - 初始化空格
    InitBoard(board,ROW,COL);
    // 查看棋盘 打印棋盘
    DisplayBoard(board, ROW, COL);
    while (1)
    {   
        // 玩家行为
        PlayerMove(board,ROW,COL);
        DisplayBoard(board, ROW, COL);
        // 判断玩家是否胜利
        res = IsWin(board,ROW,COL);
        if (res != 'C')
            break;
        // 电脑行为
        ComputerMove(board,ROW,COL);
        DisplayBoard(board, ROW, COL);
        // 判断玩家是否胜利
        res = IsWin(board,ROW,COL);
        if (res != 'C')
            break;
    }
    if (res == 'O')
    {
        printf("你获胜了!\n");

    }
    else if (res == 'X')
    {   
        printf("电脑获胜!\n");
    }
    else
    {
        printf("旗鼓相当的对手!\n");
    }
    DisplayBoard(board, ROW, COL);
}


int main(void)
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {   
        printf("*******************************\n");
        printf("**********  1. play  **********\n");
        printf("**********  0. exit  **********\n");
        printf("*******************************\n");
        printf("*******  请开始你的表演  ********\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            printf("三子棋游戏\n");
            game();
            break;

        case 0:
            printf("退出游戏\n");
            break;
        
        default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
    
    return 0;

}