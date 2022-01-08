/* strcpy.c -- 用指针方法将字符串2复制到字符串1*/
#include <stdio.h>
void cpystr(char *s1,char *s2)
{
    while (*s2 != '\0') *s1++ = *s2++;
    *s1 = '\0';
  
}

int main(void)
{
    char str1[20],str2[20];

    printf("请输入一个字符串2:\n");
    fgets(str2,80,stdin);

    cpystr(str1,str2);
    printf("字符串1是:%s\n",str1);

    return 0;
}