/* 0-100000 的水仙花数 */
#include <stdio.h>
int main(void)
{
    int i;
    int Max = 100000;
    int sum = 0;
    int temp_left = 0;
    int temp_right = 0;
    for ( i = 0; i < Max; i++)
    {
        sum = 0;
        // 判断水仙花数
        temp_left = i;
        while (1)
        {
            temp_right = temp_left % 10;
            temp_left  = (int)(temp_left / 10);
            sum = sum + temp_right*temp_right*temp_right;
            // printf("%d %d %d %d\n",i,temp_right,temp_left,sum);
            if (temp_left == 0 )
            {
                if (sum == i)
                {
                    printf("%d\n",sum);      
                }
                break;
            }

        }
    }
    
}