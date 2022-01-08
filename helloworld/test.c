#define CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
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
    char board[3][3];
}


int main(void)
{
    int input = 0;
    

    do
    {
        menu();
        printf("请选择:->");
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