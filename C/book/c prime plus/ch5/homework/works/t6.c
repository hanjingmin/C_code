/* 程序清单5.13 addemuo.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)          /* 计算前20个整数的和 */
{
    int count, sum,num;     /* 声明  */
    printf("Enter your target days:\n");
    scanf("%d",&num);
    count = 0;          /* 表达式语句 */
    sum = 0;            /* 表达式语句 */
    while (count ++ < num) /* 迭代语句 */
    
        sum = sum + count * count;
        printf("count = %d\n",sum); /* 表达式语句 */
    printf("sum = %d\n",sum); /* 表达式语句 */

    return 0;     /*  跳转语句  */    
    
}