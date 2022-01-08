#include <stdio.h>

// int check_sys(void)
// {
//     int a = 1;
//     char * p = (char *)&a;

//     return *p;

// }
// int main(void)
// {
//     // 返回1 小端
//     // 返回0 大端
//     int ret = check_sys();
//     if (ret == 1)
//     {
//         printf("小端\n");
//     }
//     else
//     {
//         printf("大端\n");
//     }
    
//     return 0;
// }
// int main(void)
// {
//     char arr[] = "abcdefg";
//     char * pc = arr;
//     printf("%s\n",arr);
//     printf("%s\n",pc);
//     return 0;
// }

// int main(void);
//     printf("%s\n",pc);
//     return 0;
// }

// int main(void)
// {
//     int arr[10] = { 1,2,3,4,5,6,7,8,9,10.};
//     int (*pa)[10] = &arr;
//     int i = 0;
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d ",(*pa)[i]);
//     }

//     return 0;
    
// }
void printf1(int arr[3][5], int x, int y)
{
    int i,j;
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("%d " ,arr[i][j]);
        }
        printf("\n");
    }
    
}

// }
void printf2(int (*p)[5], int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            // printf("%d " ,*(*(p + i) + j));
            // printf("%d " ,*(p[i] + j));
            printf("%d " ,(*(p + i))[j]);
        }
        printf("\n");
    }
    
}
int main(void)
{
    int arr[3][5] = { 
                      {1,2,3,4,5},
                      {2,3,4,5,6},
                      {3,4,5,6,7}
                    };
    printf1(arr,3,5); 
    printf2(arr,3,5);
    return 0;
}