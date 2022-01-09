/* 返回int类型数组中的最大值 */
#include <stdio.h>
int int1_cpm(int *ar);
int int1_cpm(int *ar)
{
    int temp;
    int *i;
    // printf("%d\n",*ar);
    for (i = ar;i < ar + 4; i++)
    {
        if (temp < *i)
        {
            temp = *i;
        }
    }
    return temp;
}
int main(void)
{
    int arr[20] = { 10, 61 ,54 ,64};
    int res;
    
    res = int1_cpm(arr);
    printf("%d\n",res);
    return 0;
}