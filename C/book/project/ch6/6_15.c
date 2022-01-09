/* 6_15.c  -- 输入字符串，统计元音字母的个数  */
/* It may not tried out yet, but once it does, 
        it will startle everyone! */
/* It never rains but it pours*/
#include <stdio.h>

int main(void)
{
    char str[80],*p = str;
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    printf("请输入一个字符串:\n");
    fgets(str,80,stdin);

    while (*p != '\0')
    {
        switch (*p)
        {
        case 'a':a++;break;
        case 'e':e++;break;
        case 'i':i++;break;
        case 'o':o++;break;
        case 'u':u++;
        }
        *p++;
    }
    printf("a:%d,e:%d,i:%d,o:%d,u:%d\n",a,e,i,o,u);

    return 0;

}