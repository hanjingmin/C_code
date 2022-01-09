#include <stdio.h>
#include <ctype.h>              //包含isalpha()的函数原型
#define SPACE ' '           //SPACE 表示单引号-空格-单引号
int main(void)
{
    char ch;

            //读取一个字符
    while ((ch = getchar())!='\n')        //当一行未结束时
    {
        if (isalpha(ch))     //留下空格
            putchar(ch + 1);        //该字符不变
        else
            putchar(ch); //改变其他字符
        // ch = getchar();     // 获取下一个字符
    }
    putchar(ch);            // 打印换行符
    return 0;

}