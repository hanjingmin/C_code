#include <stdio.h>

int main(void)
{
    int second_operand,first_operand;
    int res;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d",&second_operand);
    printf("Now enter the first operand:\n");
    scanf("%d",&first_operand);
    while (first_operand > 0)
    {
        res = first_operand % second_operand;
        printf("%d %c %d is %d\n",first_operand,37,second_operand,res);
        printf("Enter next number for first operand (<= 0 ti quit):\n");
        scanf("%d",&first_operand);
    }
    printf("Done!\n");

    return 0;
    
}