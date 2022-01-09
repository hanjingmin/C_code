/* a + aa + aaa + aaaa + aaaaa  */
#include <stdio.h>
#include <math.h>
int main(void)
{
    double sum ;
    int n = 0;
    double a = 0.0;
    double temp;
    printf("Please enter a single number:\n");
    scanf("%lf", &a);
    sum = temp = a;
    printf("Please enter a single number:\n");
    scanf("%d", &n);
    while (n - 1)
    {
        sum = sum * pow (10.0,1.0)+ a;
        temp = sum + temp;
        n--;
    }
    printf("%2.0lf\n",temp);
    return 0;
} 
