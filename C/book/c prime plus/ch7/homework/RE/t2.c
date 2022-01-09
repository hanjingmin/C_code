#include <stdio.h>
int main(void)
{
    // putchar('H');
    char ch;
    ch = getchar();
    putchar(ch);
    putchar('\007');
    // putchar("HELLO\n");
    // putchar("HELLO\b");
    return 0;
}