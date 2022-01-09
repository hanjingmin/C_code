#include <stdio.h>
#include <string.h>
#include <assert.h>
int my_strlen(const char* ptr)
{
    int ct = 0;
    assert(ptr != NULL);
    while (*ptr != '\0')
    {
        ct++;
        ptr++;
    }
    return ct;
}

int main(void)
{
    // int len = strlen("abcdefg");
    // char arr[] = "abcdefg";
    char arr[] = {'a','b','c','d','e','f','g'};
    int len1 = strlen(arr);
    int len = my_strlen(arr);
    printf("%d\n",len1);
}