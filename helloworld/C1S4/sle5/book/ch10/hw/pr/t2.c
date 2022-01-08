/* t2.c --数组内容copy  */
#include <stdio.h>
void copy_arr(double target1[],double source[],int length)
{
    int i;
    for (i = 0; i < 5; i++) 
    {
        target1[i] = source[i];
        printf("%1.1lf ",target1[i]);
    }
}

void copy_ptrs(double *target3,double *ptr,double *ptr1)
{

    for (; ptr < ptr1; ptr++,target3++) 
    {
        *target3 = *ptr;
        printf("%1.1lf ",*target3);
    }
}


void copy_ptr(double *target3,double *source,int length)
{
    double *ptr;
    double *ptr1;
    for (ptr = &source[0],ptr1 = &target3[0]; ptr <= &source[4]; ptr1++,ptr++) 
    {
        *ptr1 = *ptr;
        printf("%1.1lf ",*ptr1);
    }
}
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];

    int i = 0;
    int length;
    int *ptr1;
    length = sizeof(source) / sizeof(source[0]);
    // 1 数组表示法
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    
    return 0;

}