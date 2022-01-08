#include <stdio.h>
#define C_TO_IHCH 0.393701
#define C_TO_FEET 30.48
int main(void)
{
    float height,h_inch;
    int h_feet;
    printf("Enter a height in centimeters:\n");
    scanf("%f",&height);
    h_feet = height / C_TO_FEET;
    h_inch = (float) height * C_TO_IHCH;
    printf("%.1f cm = %d feet, %.1f inches.\n",height,h_feet,h_inch);
    while (height > 0)
    {
        printf("Enter a height in centimeters (<= 0 to quit):\n");
        scanf("%f",&height);
        h_feet = height / C_TO_FEET;
        h_inch =  height * C_TO_IHCH;
        printf("%.1f cm = %d feet, %.1f inches.\n",height,h_feet,h_inch);
    }
    printf("Bye~\n");
    
    return 0;

}