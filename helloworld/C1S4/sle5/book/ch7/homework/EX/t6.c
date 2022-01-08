/* t6.c -- 读取第一个非空字符  */
#include <stdio.h>
char get_first(void);
void count(void);
int main(void)
{
    char res;
    printf("Please enter your text:\n");
    res = get_first();
    printf("the target is:%c\n",res);
    return 0;
}   

char get_first(void)
{
    int ch;
    while ((ch = getchar()) == ' ')
        continue;
    return ch;
    
}