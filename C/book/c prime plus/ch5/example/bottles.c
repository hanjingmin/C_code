/*程序清单5.12 bottles.c   */
#include <stdio.h>
#define MAX 100
int main(void)
{
    int count = MAX + 1;
    int n = 3;
    while (--count >0)
    {
        printf("%d bottles of spring water on the wall, "
        "%d bottles of spring water!\n",count,count);
        printf("Take one down and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }
    printf("results:%d",n++ + n++);
    return 0;
    
}