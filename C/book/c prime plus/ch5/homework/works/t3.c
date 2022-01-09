#include <stdio.h>
#define W_NUM 7
int main(void)
{
    int num_in;
    int week,day;
    
    printf("Please input the total days you speed!\n");
    scanf("%d",&num_in);

    week = num_in / W_NUM;
    day = num_in % W_NUM;

    printf("%d days are %d weeks, %d days.\n",num_in,week,day);

    return 0;
}