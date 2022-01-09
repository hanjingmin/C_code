#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int result = pow(2,32) - 1; //默认是符号变量，int整型长度为4，每个int均为8bit大小，共32位可存储，且首位存储符号正负
    printf("result = %u\n",result);  //无符号变量 %u 符号变量%d
    return 0;
}