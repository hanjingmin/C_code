/* 输入n个字符 把结果储存在一个数组里 */
#include <stdio.h>
#define LIM 30

char * s_gets(char *st, int n);
int main(void)
{
    char ar[LIM];
    puts("Enter a number (empty line to quit):");
    s_gets(ar,LIM);
    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*ret_val != '\n' && *ret_val != '\0')
            ret_val++;
        if (*ret_val == '\n')
            *ret_val = '\0';
        else
            while (getchar() != '\n')
                // continue;
                printf("\n");
    }
    return st;
}