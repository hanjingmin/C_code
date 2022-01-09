/* 返回double类型数组中最大值的下标 */
#include <stdio.h>
int max_cpm(int *pa,int length);

int main(void)
{
    int arr[] = { 8, 4, 10, 2};
    int index;
    int length;
    length = sizeof(arr) / sizeof(arr[0]);
    index = max_cpm(arr,length);
    printf("%d %d\n",length,index);
}

int max_cpm(int *pa,int length)
{
    int *OldP = pa;
    int temp,idx;
    temp = *pa;
    for (;pa < OldP + length; pa++)
    {
        if (temp < *pa)
        {
            temp = *pa;
            idx = pa - OldP;
        }
        
    }
    return idx;
}