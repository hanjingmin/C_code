/* test8.c ---- 计算容量 */
#include <stdio.h>
int main()
{
    double pint = 0.5;
    double ounce = 8;
    double big_spoon = 16;
    double tea_spoon = 48;
    double num;
    printf("Please input your numbers: ");
    scanf("%lf",&num);
    printf("The volunm of this has %.2f pint.\n" ,num*pint);
    printf("The volunm of this has %.2f ounce.\n" ,num*ounce);
    printf("The volunm of this has %.2f 大汤勺.\n" ,num*big_spoon);
    printf("The volunm of this has %.2f 茶勺.\n" ,num*tea_spoon);

    return 0;


}