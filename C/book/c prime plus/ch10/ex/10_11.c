// sum_arr1.c -- 数组元素之和
// 如果编译器不支持 %zd，用 %u 或 %lu替换它
#include <stdio.h>
#define SIZE 10
int sump(int * start,int * end);
int main(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;

    answer = sump(marbles,marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);

    return 0;
}

int sump(int * start, int *end)
{
    int total = 0;

    while (start < end)
    {
        total += *start;
        start++;
        printf("total:%d\n", total);
    }
    return total;
    
}