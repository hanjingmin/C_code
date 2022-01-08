/* 返回储存在double类型数组中最大值和最小值的差值 */
#include <stdio.h>
double ret_sub(double *arr,int length)
{
    double min,max;
    int i = 0;
    min = max = *(arr);
    while (i<length)
    {
        if (*(arr + i) <= min) min = *(arr + i);
        if (*(arr + i) >= max) max = *(arr + i);
        i++;
    }
    return max - min;
}
int main(void)
{
    double array[] = { 1.1, 2.2, 3.3, 4.4, 5.5 ,20, 6};
    int length;
    double res;
    length = sizeof(array) / sizeof(array[0]);
    res = ret_sub(array,length);
    printf("The sub of a and b is : %2.1lf\n",res);

    return 0;
}