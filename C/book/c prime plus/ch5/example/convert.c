/* 程序清单5.14: convert.c -- 自动类型转换 */
#include <stdio.h>
int main()
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';                                  /* 第09行*/
    printf("ch = %c, i = %d. fl = %2.2f\n", ch, i, fl); /* 第10行*/
    ch = ch +1;                                         /* 第11行*/
    i = fl + 2 * ch;                                    /* 第12行*/
    fl = 2.0 * ch + i;                                   /* 第13行*/
    printf("ch = %c, i = %d. fl = %2.2f\n", ch, i, fl); /* 第14行*/
    ch = 1107;                                          /* 第15行*/
    printf("Now ch = %c\n",ch);                         /* 第16行*/
    ch = 80.89;                                         /* 第17行*/
    printf("Now ch = %c\n", ch);                        /* 第18行*/

    return 0;

}