/* charcode.c -- 显示字符的代码编号*/
/*
你说你喜欢雨，
但是你在下雨的时候打伞；
你说你喜欢太阳，
但是你在阳光明媚的时候躲在阴凉的地方；
你说你喜欢风，
但是在刮风的时候你却关上窗户；
这就是为什么，
我会害怕你。
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("输入一个字符: \n");
 
    // 读取用户输入
    scanf("%c", &ch);  
    
    // %d 显示整数
    // %c 显示对应字符
    printf("字符 %c 的 ASCII 为 %d\n", ch, ch);
    return 0;
}