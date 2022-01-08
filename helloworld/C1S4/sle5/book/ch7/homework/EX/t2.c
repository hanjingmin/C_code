/* t2.c -- 统计在读到文件结尾之前的字符数  */
#include <stdio.h>
int main(void)
{
    int ch;
    int count = 0;
    printf("Please input your text:\n");
    while ((ch = getchar()) != EOF)
    {
        if (count++ ==10)
        {
            putchar('\n');
            count = 1;
        }    
        if (ch >= 32)
        {
            printf("\'%c\' - %3d\n",ch,ch);
        }
        else if (ch == '\n')
        {
            printf("\\n - \\n\n");
        }
        else if (ch == '\t')
        {
            printf("\\t - \\t\n");
        }
        else
        {
            printf("\'%c\' - ^%c\n",ch,ch+64);
        }
    }
    puts("Done.\n");
    return 0;
    
}