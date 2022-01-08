/* 6.18 利用指针数组对多字符串进行排序 */
#include <stdio.h>
#include <string.h>

int main(void)

{
    int i,j;
    char *ps[4] = {"China","Japan","Korea","Australia"},*p;
    printf("字符串原顺序是:\n");

    for (i = 0; i < 4; i++) puts(ps[i]);

    for (i = 0;i < 3; i++) 
        for (j = i + 1; j < 4; j++)
            if (strcmp(ps[i],ps[j]) > 0)
                {
                    p = ps[i]; ps[i] = ps[j]; ps[j] = p;
                }
    printf("排序后的字符串是:\n");

    for (i = 0; i < 4; i++) puts(ps[i]);

    return 0;

}