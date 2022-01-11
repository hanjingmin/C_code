#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
void GetMemory(int *p)          // 局部变量 栈区
{
    printf("2:%p %d\n",p,*p);  
    p = (int *)malloc(100);       // 动态内存 堆区
    // *p = 6; 
    // p = ""                 // 局部变量 栈区
    printf("3:%p\n",p);
}

void Test(void)
{
    // char *str = NULL;
    // int a = 4;              // 全局变量 静态区
    int *str = NULL;          // 全局变量 静态区

    GetMemory(str);
    printf("4:%p %d\n",str,*str);  
    // strcpy(str,"hello world");
    // printf(str);
}

int main()
{
    Test();
    return 0;
}


