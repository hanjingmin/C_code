/* find a substring */
#include <stdio.h>
#include <string.h>
#include <assert.h>
char* my_strstr(const char* fast,const char* slow)
{
    assert(fast != NULL);
    assert(slow != NULL);
    char * s1 = NULL;
    char * s2 = NULL;
    char * cur = (char*)fast;
    if (*slow == '\0')
    {
        return (char*)fast;
    }

    while (*cur)
    {
        s1 = cur;
        s2 = (char*)slow;
        while ((*s1 == *s2) && *s2 && *s1)
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return (char*)cur;
        }
        if (*s1 == '\0')
        {
            return (char*)cur;
        }
        cur++;
        
    }
    return NULL;
}
int main(void)
{
    char *p1 = "abbbcdef";
    char *p2 = "derf";
    char* ret = my_strstr(p1,p2);
    if (ret == NULL)
    {
        printf("子串不存在\n");
    }
    else
    {
        printf("子串存在\n");
    }
    printf("%s",ret);
}