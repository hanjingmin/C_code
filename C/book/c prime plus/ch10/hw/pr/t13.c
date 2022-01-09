/* 用户输入数组 */
#include <stdio.h>
#define ROW 2
#define COL 2

// 键入数组
void arr_get(double arr[ROW][COL])
{
    double num;
    char ch;
    // double arr[ROW][COL];
    int count = 0;
    int j,i;
    for ( j = 0; j < ROW; j++)
    {
        printf("请输入第%d行:\n",j+1);
        while (1) 
        {   
            scanf("%lf",&num);
            //用户控制输入结束。
            // printf("%2.1lf",num);
            arr[j][count]= num;
            count++;
            if ((getchar()) == '\n')  
            {   //表示当输入-1的时候跳出while即结束输入！
                break;
            }            
        }
        // printf("\n");
        count = 0;
    }

    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            printf("%2.1lf ", arr[i][j]);
        }
        printf("\n");
    }
    
}

void arr_aver1(double arr[ROW][COL])
{
    int i,j;
    double sum = 0;
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            sum += arr[i][j];
        }
    sum = sum / (COL);
    printf("The result is:%2.1lf\n",sum);      
    sum = 0; 
    }

}

void arr_aver2(double arr[ROW][COL])
{
    int i,j;
    double sum = 0;
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            sum += arr[i][j];
        }
    }
    sum = sum / (ROW +COL);
    printf("The result is:%2.1lf\n",sum);
}

void arr_max(double arr[ROW][COL])
{
    int i,j;
    double max = arr[0][0];
    for ( i = 0; i < ROW; i++)
    {
        for ( j = 0; j < COL; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    printf("The maximun is:%2.1lf\n",max);
}


int main()
{
    double arr1[ROW][COL];

    arr_get(arr1);
    arr_aver1(arr1);
    // arr_aver2(arr1);
    arr_max(arr1);
    return 0;
}