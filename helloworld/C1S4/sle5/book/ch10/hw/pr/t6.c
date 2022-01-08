/*  把double类型数组中的数据倒序排列  */
#include <stdio.h>
void ret_arr(double *arr,int l)
{
    double * left; 
    double * right;
    left = arr;
    right = left + l - 1;
    // printf("1111:%lf %lf %f\n",*left,*right,right - left);
    // printf("2222:%p %p \n",left,right);
    while ((right - left) > 0)
    {
        double temp;
        temp = *left; *left = *right; *right = temp;
        // printf("%d %d %d\n",*left,*right,right - left);
        left+=1;
        right-=1; 
    }
    
}

int main(void)
{
    double array[] = { 1.1, 2.2, 3.3, 4.4, 5.5 ,20, 6};
    int length;
    int i;
    length = sizeof(array) / sizeof(array[0]);
    ret_arr(array,length);
    printf("The reverse is: ");
    
    for ( i = 0; i < length; i++)  
    {
        printf("%2.1lf ",array[i]);
    }
    

    return 0;
}