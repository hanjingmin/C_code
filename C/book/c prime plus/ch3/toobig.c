/* toobig.c -- 整数溢出 超出系统允许的最大int值 */
/* 绽放在生命中的热爱 */
#include <stdio.h>
int main()
{
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%d %d %d\n",i,i+1,i+2);
    printf("%d %d %d\n",j,j+1,j+2);
    printf("%u %u %u\n",j,j+1,j+2);
    printf("re=%d\n",4294967295 - 2147483648*2);

    return 0;
}


