/* 6_24.c -- 用双指针对数组元素进行排序 */ 

#include <stdio.h>

void exchange(int *ar,int length);
int main(void)
{
    int array1[] = {13,46,83,12,100};
    int n = 0;
    int length;
    // printf("输入一个整数数组:\n");
    length = sizeof(array1) / sizeof(array1[0]);
    printf("原数组:\n");
    for (n=0;n < length;n++) 
        printf("%d ",array1[n]);
        printf("\n");
    exchange(array1,length);
    printf("\n排序后数组:\n");
        for (n=0;n < length;n++) 
        printf("%d ",array1[n]);
    printf("\n");
    return 0;

}


void exchange( int ar[],int length)
{
    int re;
    int *left,*right,temp;
    left = ar;
    right = ar;
    for ( ; left < ar + length; left++)
        for ( right = left + 1;  right < (ar + length); right++)
            {
                if (*left < *right)
                    {
                        temp = *left;*left = *right; *right = temp;
                    }
            }
        // for (re=0;re<length;re++) printf("ar=%d\n",*(ar+re));
    
}

