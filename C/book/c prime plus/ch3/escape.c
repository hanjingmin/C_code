/* escape.c -- 使用转移序列*/
#include <stdio.h>
int main()
{
    float salary;

    printf("\aEnter your desired mouthly salary: ");  /* 1 */
    printf("$_______________\b\b\b\b\b\b");                   /* 2 */
    scanf("%f",&salary);
    printf("\n\t$%.2f a mouth is $%.2f a year.",salary,salary * 12.0); /* 3 */
    printf("\rGee!\n");                     /* 4 */

    return 0;
}