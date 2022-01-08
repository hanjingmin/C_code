
#include <stdio.h>
#include <float.h>
int main()
{
    double d_temp = 1.0;
    float f_temp = 1.0;

    printf("double_temp:%.6f  float_temp:%.6f\n",d_temp,f_temp);
    printf("double_temp:%.12f  float_temp:%.12f\n",d_temp,f_temp);
    printf("double_temp:%.16f  float_temp:%.16f\n",d_temp,f_temp);
    printf("%d %d",FLT_DIG,DBL_DIG);
    // FTL_DIG 15
    // DBL_DIG 06
    return 0;

}