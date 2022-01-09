/* t1.c -- 统计在读到文件结尾之前的字符数  */
#include <stdio.h>
int main(void)
{
    int ch;
    int count = 0;
    printf("Please input your text:\n");
    while ((ch = getchar()) != EOF)
    {
        count += 1;
        // putchar(ch);
    }
    printf("The total number is %d\n", count);
    return 0;
    
}