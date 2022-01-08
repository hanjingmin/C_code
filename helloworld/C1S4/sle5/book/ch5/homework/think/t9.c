#include <stdio.h>
#define TEN 7
int main(void)
{
    int n = 0;

    while (n++ < TEN)
    {
        printf("%5c",n+96);
    }
    printf("\n");
    return 0;
    
}