#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>
// char * GetMemory(void)         
// {  
//     char p[] = "hello world";
//     return p;       
// }

// void Test(void)
// {
//     char *str = NULL;	   
//     str = GetMemory();
//     printf(str);
// }

// int main()
// {
//     Test();
//     return 0;
// }


void  Test(void)
{
    char *str = (char *)malloc(100);
    strcpy(str,"hello");
    free(str);
    if (str != NULL)
    {
        strcpy(str,"world");
        printf(str);
    }
}
int main()
{
    Test();
    return 0;
}