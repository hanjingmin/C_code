/* strerror.c 错误报告函数*/
#include <stdio.h>
#include <string.h>
#include <error.h>
#include <errno.h>
// int main(void)
// {
//     // 错误码 每一个错误码对应一个错误信息
//     // 0 - No error  Success
//     // 1 - Operation not permitted
//     // 2 - No such file or directory
//     // 3 - No such process
//     // 4 - Interrupted system call
//     // errno 是一个全局的错误码的变量
//     // 当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码赋值到errno中
//     // char * str = strerror(errno);
//     // printf("%s",str);
//     FILE* pf = fopen("./test.txt","r");
//     if (pf == NULL)
//     {
//         printf("%s",strerror(errno));
//     }
//     else
//     {
//         printf("open file success!\n");
//     }
//     return 0;
// }



    struct S1    // 结构体变量的定义
    {
        char c1;
        int a;
        char c2;
    };
    struct S2    // 结构体变量的定义
    {
        char c1;
        char c2;
        int a;
    };
    // 初始化
    int main(void)
    {
        struct S1 s1 = {0};     // 结构体变量声明
        printf("%ld\n",sizeof(s1));          
        struct S2 s2 = {0};     // 结构体变量声明
        printf("%ld\n",sizeof(s2));   
        return 0;
    }    