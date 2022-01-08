/* 打印姓名  */
#include <stdio.h>
int main()
{
    char name1[10];
    char name2[10];
    printf("请输入您的姓：");
    scanf("%s",name1);
    printf("请输入您的名：");
    scanf("%s",name2);
    printf("请确认您的: 名,姓-%s,%s\n",name1,name2);

    return 0;

}