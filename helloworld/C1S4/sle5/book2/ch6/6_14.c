/* 6_14.c -- 在输入的字符串中删除指定的字符 */
#include <stdio.h>
int main(void)
{
    char str[80], *p, *q, ch;

    printf("输入一个字符串:\n");

    fgets(str,80,stdin);

    printf("输入你想删除的字符串:\n");

    ch = getchar();

    p = q = str;

    for (; *p != '\0'; p++)
        if (*p!= ch)
            *q++=*p;
    
    *q = '\0';
    printf("Done\n");
    printf("Result:%s",str);

    return 0;
    
}