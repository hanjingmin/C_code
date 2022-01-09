#include <stdio.h>
int main(void)
{
    int ref[] = { 8, 4, 0, 2};
    int *ptr;
    int i;

    int temp;
    // for ( i = 0, ptr = ref; i < 4; i++, ptr++)
    // {
    //     printf("%d %d\n",ref[i],*ptr);
    // }
    // ref + 1
    // temp = ++ref;
    printf("%d %d\n",ref+1,*(ptr + 1));
    return 0;
}