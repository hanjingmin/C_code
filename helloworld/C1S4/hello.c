#include <stdio.h>
int main()
{
    char a[20];
    printf("How much do you cost?:\n");
    scanf("%s",a);  //赋值，L/l 长度修饰符，输入"长"数据，对应double
    printf("Your name is : %s\n",a);
    return 0;
}


