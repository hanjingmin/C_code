
#include "game.h"
// 函数的函数体存放
// 初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
        
    }
}

// 查看并打印棋盘
// void DisplayBoard(char board[ROW][COL],int row, int col)
// {
//     int i;
//     for ( i = 0; i < row; i++)
//     {
//         printf(" %c | %c | %c \n",board[i][0], board[i][0], board[i][0]);
//         if ( i < row - 1) printf("---|---|---\n");
//     }
    
// }

void DisplayBoard(char board[ROW][COL],int row, int col)

{
    int i,j;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            (j < col - 1) ? printf(" %c |",board[i][j]):printf(" %c \n",board[i][j]);
        }
        for ( j = 0; j < col; j++)
        {
            if (i == row - 1) break;
            (j < col - 1) ? printf("---|"):printf("---\n");
        }
    }
}

// 玩家下棋
void PlayerMove(char board[][COL],int row,int col)
{
    int x,y;
    while (1)
    {
        printf("玩家出棋: \n");
        printf("请输入落子位置 -> \n");
        scanf("%d %d",&x,&y);
        // 判断坐标合法性
        if (x >=1 && x <= row && y >= 1 && y <= col)
        {
            // 下棋
            // 判断坐标是否被占用
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = 'O';
                break;
            }
            else
            {
                printf("坐标被占用，请重新输入.\n");
            }
        }
        else
        {
            printf("坐标输入错误，请重新输入:\n");
        }
    }


}

// 电脑下棋
void ComputerMove(char board[ROW][COL],int row,int col)
{
    printf("电脑出棋:\n");
    while (1)
    {
        int x = rand() % row;
        int y = rand() % col;
        // 判断占用
        if (board[x][y] == ' ')
        {
            board[x][y] = 'X';
            break;
        }
    }


}

int IsFull(char board[ROW][COL],int row,int col)
{
    int i,j;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0; // 棋盘没满
        }
        
    }
    return 1;    
}


// // 判断输赢
// char IsWin(char board[ROW][COL],int row,int col)
// {
//     int i,j;
//     for (i = 0; i < row; i++)
//     {
//         for (i = 0; i < row; i++)
//         {
//             1
//         }
//     }




//     // 判断平局
//     int ret = IsFull(board,row,col);
//     if (ret == 1)  return 'Q';
//     else return 'C';
// }







// 判断输赢
char IsWin(char board[ROW][COL],int row,int col)
{
    int i,j;
    int cnt = 0;;
    // 判断三行
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (board[i][j] == 'O')
            cnt += 1;
        }
        if (cnt == row) return board[i][j];
        cnt = 0;

        for ( j = 0; j < col; j++)
        {
            if (board[i][j] == 'X')
            cnt += 1;
        }
        if (cnt == row) return board[i][j];
        cnt = 0;
    }
    

    // 判断三列
    for ( j = 0; j < col; j++)
    {
        for (i = 0; i < row; i++)
        {
            if (board[i][j] == 'O')
            cnt += 1;
        }
        if (cnt == row) return board[i][j];        
        cnt = 0;

        for (i = 0; i < row; i++)
        {
            if (board[i][j] == 'X')
            cnt += 1;
        }
        if (cnt == row) return board[i][j];
        cnt = 0;
    }
    

    // 判断主对角线
    for (i = 0; i < row; i++)
    {
        if (board[i][i] == 'O')
            cnt += 1;
    }
    if (cnt == row) return 'O';
    cnt = 0;
    

    for (i = 0; i < row; i++)
    {
        if (board[i][i] == 'X')
            cnt += 1;
    }
    if (cnt == row) return 'X';
    cnt = 0;
    

    // 判断次对角线
    for (i = 0; i < row; i++)
    {
        if (board[i][row - i] == 'O')
            cnt += 1;
    }
    if (cnt == row) return 'O';
    cnt = 0;

    for (i = 0; i < row; i++)
    {
        if (board[i][row - i] == 'X')
            cnt += 1;
    }
    if (cnt == row) return 'X';
    




    // 判断平局
    int ret = IsFull(board,row,col);
    if (ret == 1)  return 'Q';
    else return 'C';
}


