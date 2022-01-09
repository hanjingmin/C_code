/* 6_4.c -- 申明问题 */
#include <stdio.h>
void ast(int x, int y, int *cp, int *dp)
{
    *cp = x + y;
    *dp = x - y;
}

int main(void)
{
    int a = 4, b = 3, c, d;
    printf("c = %d, d = %d\n",c,d);

    ast(a,b,&c,&d);
    printf("c = %d, d = %d\n",c,d);

    return 0;
}