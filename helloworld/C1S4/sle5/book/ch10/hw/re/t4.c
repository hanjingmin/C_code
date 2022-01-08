#include <stdio.h>

int main(void)
{
    int *ptr;
    int *ptr1;
    int torf[2][2] = {12, 14, 16};
    int fort[2][2] = { {12}, {14,16} };
    ptr = torf[0];
    ptr1 = fort[0];
    printf("%d %d\n", *ptr, *(ptr + 2));
    printf("%d %d\n", *ptr1, *(ptr1 + 2));
    return 0;
}