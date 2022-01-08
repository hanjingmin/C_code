/*他不懂你的心，假装冷静*/
#include <stdio.h>
void one_three(void);
void two(void);
int main()
{
    printf("starting now:\n");
    one_three();
    printf("Done!\n");
}
void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}