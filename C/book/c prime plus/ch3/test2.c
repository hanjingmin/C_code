/* 输入ASCII码  输出对应的字符 */
#include <stdio.h>
int main()
{
    int num;
    printf("输入ASCII码:");
    scanf("%d",&num);
    printf("你输入的ASCII码 %d 对应的字符为%c\n",num,num);
    return 0;
}