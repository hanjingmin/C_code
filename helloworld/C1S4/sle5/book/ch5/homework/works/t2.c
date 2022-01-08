#include <stdio.h>
#define U_NUM 10
int main(void)
{
    int num;
    int i;
    printf("please input a integet:\n");
    scanf("%d",&num);
    i = -1;
    printf("The answer includes:\n");
    while (i++ < U_NUM)
        printf("%d ",i + num);
    printf("\nThat's all!\n");

    return 0;
    
}