/* sizeof.c -- 使用sizeof运算符 */
// 使用C99新增的%zd转换寿命-- 如果编译器不支持%zd 请将其改成%u 或%lu
#include <stdio.h>
int main()
{
    int n = 0;
    size_t intsize;
    
    intsize = sizeof (int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
    n,sizeof n,intsize);

    return 0;
    
}
