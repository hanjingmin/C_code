#include <stdio.h>
int main(void)
{
    int ref[] = { 8, 4, 0, 2};
    int *ptr;
    int index;
    ptr = ref;
    printf("%p\n",++ptr);
    for (index = 0,ptr = ref; index < 4; index++,ptr++)
        printf("%d %d %p\n", ref[index],*ptr,ptr);
    
    
    return 0;
}