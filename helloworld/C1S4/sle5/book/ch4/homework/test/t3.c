#include <stdio.h>
int main()
{
    float temp;
    printf("Please input a float number:\n");
    scanf("%f",&temp);  //21.29
    printf("%2.1f or %2.1e\n",temp,temp);
    printf("%2.3f or %3.3E\n",temp,temp);

    return 0;

}