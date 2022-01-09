#include <stdio.h>

int main(void)
{
    int a = 10;
    int c = 0x11223344;
    float f = 10.0;
    printf("%p\n%p\n%d\n%p\n", &a,&f,c,&c);

    return 0;
}