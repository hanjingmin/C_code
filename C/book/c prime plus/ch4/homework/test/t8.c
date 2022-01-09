

#include <stdio.h>
#define GALLON 3.785
#define MILE 1.609
int main()
{
    float driver_miles;
    float oil_volume;
    float results;
    float results_new;
    printf("Please input your driver_miles:\n");
    scanf("%f",&driver_miles);
    printf("Please input your oil_volume:\n");
    scanf("%f",&oil_volume);
    results  = driver_miles / oil_volume;
    results_new = (driver_miles * MILE) / (oil_volume * GALLON);
    printf("英式单位下的速度为：%.1f\n",results);
    printf("国际单位制下的速度为：%.1f\n",results_new);

    return 0;

}