/* 6_19.c --  */
#include <stdio.h>

void main(void)
{
    static int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int *pa[3] = {a[0],a[1],a[2]};  
    // 定义指针数组且能够取到列指针
    int *p = a[0], i;   // 定义指针变量并取得首地址
    
    for ( i = 0; i < 3; i++)
        printf("%d,%d,%d\n",a[i][2-i],*a[i],*(*(a+i)+i));
    for ( i = 0; i < 3; i++)
        printf("%d,%d,%d\n",*pa[i],p[i],*(p+i));

    

}