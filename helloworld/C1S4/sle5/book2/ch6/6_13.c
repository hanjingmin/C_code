/* 6_13.c  -- 在输入的字符串中查找是否存在字符‘k’
              若存在，则指出第一次出现的位置。  */
#include <stdio.h>
int main(void)
{
    char str[80], *ps = str;
    int i;
    printf("输入一个字符串:\n");
    fgets(ps,80,stdin);
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'k')
            break;
    }
    if (str[i] != '\0')
        printf("'k'是第%d个字符",i+1);
    else
        printf("在字符串中不存在字符‘k’\n");
    
    return 0;
    
}