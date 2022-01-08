/* integral.c -- 利用梯形法计算定积分  */
#include <stdio.h>
#include <math.h>
#define PI 3.1415926
/*  定义工作函数 */
double integral(double(*funp)(), double a, double b)   
{
    double s, h, y;
    int n, i;
    // 梯形的面积公式
    s = ((*funp)(a)+(*funp)(b)) / 2.0;
    n = 100; 
    h = ( b - a) / n;
    for (i = 1; i < n; i++) 
        s = s + (*funp)(a+i*h);
    y = s * h; 

    return y;
    
}

/* 自定义被积函数 */
double f(double x)
{
    return sqrt(4.0 - x*x);
} 

void main(void)
{
    double s1, s2, s3;
    s1 = integral(sin,0.0,PI/2);
    s2 = integral(cos,0.0,PI/2);
    s3 = integral(f,0.0,2.0);
    printf("s1 = %f, s2 = %f, s3 = %f\n",s1,s2,s3);
}