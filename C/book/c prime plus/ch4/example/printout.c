/* printout.c -- 使用转换说明*/
#include <stdio.h>
#define PI 3.141593
int main()
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n",number,pies);
    printf("The value of pi is %d\n",PI);
    printf("Farewell! thou zrt too dear for my possessing,\n");
    printf("%c%+10d\n",'$',2*cost);

    return 0;

} 