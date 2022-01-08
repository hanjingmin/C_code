/* test5.c -- 计算秒*/
#include <stdio.h>
int main()
{
    double year = 3.156e7;
    int num;
    printf("Please input your age: ");
    scanf("%d",&num);
    printf("You has been lived %e seconds.\n",num*year);
    return 0;
}