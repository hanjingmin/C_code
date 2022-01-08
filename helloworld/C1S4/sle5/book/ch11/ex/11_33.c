/* strcnvt.c -- 使用 strtol() */
#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char * st, int n);

int main(void)
{
    char number[LIM];
    char *end;
    long value;

    puts("Enter a number (empty line to quit):");
    while (s_gets(number,LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10); /* 十进制 */
        printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n"
                ,value,end,*end);
        value = strtol(number, &end, 16); /* 十六进制 */
        printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n"
                ,value,end,*end);
        puts("Next number:");
    }
    puts("Bye!\n");
    return 0;
}


char * s_gets(char *st, int n)
{
    char * ret_val;
    char * ret_val1;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (*ret_val != '\n' && *ret_val != '\0')
            ret_val++;
        if (*ret_val == '\n')
            *ret_val = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return st;
}