#include <stdio.h>
#define MINT 60
int main(void)
{
    int t_in,t_out;
    int hour;

    printf("请输入总的分钟数:\n");
    scanf("%d",&t_in);
    hour = t_in / MINT;
    t_out = t_in % MINT;
    printf("你花费了%d小时%d分来编这个破程序！\n",hour,t_out);
    return 0;
}