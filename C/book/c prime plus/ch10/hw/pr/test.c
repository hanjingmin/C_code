
#include <stdio.h>
int main()
{

    double num;
    char ch;
    double arr[100];
    int count = 0;
    printf("请输入:\n");
    while (1) 
    {   
        scanf("%lf",&num);
        //用户控制输入结束。
        // printf("%2.1lf",num);
        arr[count]= num;
        count++;
        if ((getchar()) == '\n')  
        {   //表示当输入-1的时候跳出while即结束输入！
            break;
        }
    }
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%2.1f ",arr[i]);
    }
    return 0;
}