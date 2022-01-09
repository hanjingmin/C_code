
#include "game.h"


// 构建棋盘存储数组 
void InitBoard(char board[ROWS][COLS],int rows,int cols, char set)
{
    int i,j;
    // 初始化数组
    for ( i = 0; i < rows; i++)
    {   
        for ( j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}


// 展示棋盘
void DisplayBoard(char board[ROWS][COLS],int row, int col)

{
    int i,j;
    for ( i = 0; i < col + 1 ; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    for ( i = 1; i <= row; i++)
    {
        printf("%d ",i);
        for ( j = 1; j <= col; j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

// 初始化雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
    // 初始化雷的个数
    int cnt = CNT;
    while (cnt)
    {
        // 生成随机的下标
        int x = rand() % row + 1;
        int y = rand() % col + 1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            cnt--;
        }
    }
}

// 9宫格
static int get_mine_cnt(char mine[ROWS][COLS],int x,int y)
{
    return mine[x-1][y] + mine[x-1][y-1] + mine[x-1][y+1]
            + mine[x][y-1] + mine[x][y+1]
            + mine[x+1][y-1] + mine[x+1][y] + mine[x+1][y+1] - 8 * '0';
}

// 排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS] , int row, int col)
{
    // 1. 逐位置检查， 若该位置是雷，则结束；反之，计算9宫格
    int i,j;
    int x,y;
    int win = 0;
    while (win < row * col - CNT)
    {
        printf("请输入要排查的坐标:x y = ");
        scanf("%d %d",&x,&y);
        // 检测坐标范围
        if (x >=1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')
            {
                printf("很遗憾，你没了!\n");
                DisplayBoard(mine,ROW,COL);
                break;
            }
            else
            {
                // 不是雷 统计周围
                int count = get_mine_cnt(mine,x,y);
                show[x][y] = count + '0';
                DisplayBoard(show,ROW,COL);
                win++;

            }
        }
        else
        {
            printf("坐标不合法，请重新输入:\n");
        }
    }
    if (win ==  row * col - CNT) 
    {
        printf("你终于赢了!\n");
    }
    
}
