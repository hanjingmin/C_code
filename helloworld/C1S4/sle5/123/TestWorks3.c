#include <stdio.h>

int main(void)
{
    int n,i,j;
    printf("Please enter a number:\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 2; i >= 0 ; i--)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}