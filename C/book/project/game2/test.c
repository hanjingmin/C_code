// 五子棋的设计
#include <stdio.h>
#include "game.h"

void game()
{
    char mine[ROWS][COLS] = {0};
    char show[ROWS][COLS]= {0};
    // 初始化棋盘
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    // 展示棋盘
    DisplayBoard(mine,ROW,COL);
    printf("---------------------\n");
    // DisplayBoard(show,ROW,COL);
    // 布置雷
    SetMine(mine,ROW,COL);
    DisplayBoard(mine,ROW,COL);
    // 排查雷
    FindMine(mine,show,ROW,COL);

    // 判断获胜条件

    

    // 判断获胜条件
} 

void menu(void)
{
    printf("*********************************\n");
    printf("**********   1. play  ***********\n");
    printf("**********   0. exit  ***********\n");
    printf("*********************************\n");
    printf("*********   请开始您的表演   ******\n");
}

int main(void)
{
    int input;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请做出您的选择:\n");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            printf("扫雷游戏\n");
            game();
            break;
        
        case 0:
            printf("游戏结束\n");
            break;
        
        default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
    

    return 0;
}
