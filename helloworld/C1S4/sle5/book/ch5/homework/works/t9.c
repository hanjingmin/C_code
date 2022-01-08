#include <stdio.h>
void Temperatures(double temp);
int main(void)
{
    double tempture;
    int count;
    
    while ((tempture != 'q' ) && (count != 0))
    {
        printf("Enter a tempture:\n");
        count = scanf("%lf",&tempture);
        Temperatures(tempture);
    }
    
    

    return 0;
}
void Temperatures(double temp)
{
    double temp1,temp2;
    const double ts1 = 5.0;
    const double ts2 = 9.0;
    const double ts3 = 32.0;
    const double ts4 = 273.16;
    temp1 = ts1 /ts2 * (temp -ts3);
    temp2 = temp1 + ts4;
    printf("%.2f F    %.2f C   %.2f K\n",temp,temp1,temp2);
}