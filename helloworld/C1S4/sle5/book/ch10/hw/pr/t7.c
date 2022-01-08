/*  */
#include <stdio.h>

void copy_ptrs(double *target3,double *ptr,double *ptr1)
{

    for (; ptr < ptr1; ptr++,target3++) 
    {
        *target3 = *ptr;
        printf("%1.1lf ",*target3);
    }
}

int main(void)
{
    double source[][5] = {{1.1, 1.2, 1.3, 1.4, 1.5},
                          {2.1, 2.2, 2.3, 2.4, 2.5}};
    double target3[2][5];
    int i = 0;
    int length;
    length = sizeof(source) / sizeof(source[0][0]);
    // 1 数组表示法
    copy_ptrs(&target3[0][0], &source[0][0], &source[0][0] + 10);
    
    return 0;

}