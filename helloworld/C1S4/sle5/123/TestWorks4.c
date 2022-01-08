/* 喝汽水，1瓶汽水1元，两个空瓶换一瓶汽水，给定初始资金，计算能喝的汽水数 */
#include <stdio.h>
// 42
int main(void)
{
    int n;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    int ret1;
    int ret2 = 0;
    int sum = n;
    while(n)
    {
        ret1 = n % 2;           
        ret2 = n / 2;
        n = ret1 + ret2;
        sum = sum + ret2;
        if (n == 1)
        {
            sum += 1;
            break;
        }
    }
    printf("%d\n",sum);
    return 0;
}