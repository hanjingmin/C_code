/* strtok.c 字符串分割函数  */
#include <stdio.h>
#include <string.h>

char* my_strtok(char* target,const char* req)
{
    static char* temp;
    char *ret;
    char *start = (char*)req;
    if (target == NULL)
    {
        target = temp;
    }
    else
    {
        temp = target;
    }
    if (temp == NULL)
    {
        return NULL;
    }
    while (*target && (target != NULL))
    {
        while ((*target != *req) && (*req != '\0') && (*target != '\0'))
        {    
            req++;
        }
        if (*target == *req)
        {
            *target = '\0';
            ret = temp;
            target++;
            temp = target;
            return ret;
        }
        req = start;
        target++;
    }
    ret = temp;
    temp = NULL;
    return ret;
}
int main(void)
{
    char arr[] = "han.jing.min.0805@gamil.com";
    char seq[] = "@.";
    char buf[1024] = {0};
    strcpy(buf,arr);
    char* ret = NULL;
    // char* ret = strtok(buf,seq);
    for ( ret = my_strtok(buf,seq) ; ret != NULL; ret = my_strtok(NULL,seq))
    {
        printf("%s\n",ret);
    }

    return 0;
    
}