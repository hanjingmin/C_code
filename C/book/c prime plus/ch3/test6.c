/* */ 
#include <stdio.h>
int main()
{
    double water_weight = 3.0e-23;
    double qak = 950;
    double result;
    printf("please input your water's qak: ");
    scanf("%lf",&result);
    printf("The numbers of water is: %f\n",result * qak / water_weight);
    
    return 0;

}