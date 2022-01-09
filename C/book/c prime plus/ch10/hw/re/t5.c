#include <stdio.h>

int main(void)
{
    int i,j;
    int (*ptr)[2];
    int (*ptr1)[2];
    int torf[2][2] = {12, 14, 16};
    int fort[2][2] = { {12}, {14,16} };
    ptr = torf;
    ptr1 = fort;
    for ( i = 0; i < 2;i++)
        for ( j = 0; j < 2;j++)
            printf("%d \n", torf[i][j]);
    printf("%d %d\n", **ptr, **(ptr + 1));
    printf("%d %d\n", **ptr1, **(ptr1 + 1));
    return 0;
}