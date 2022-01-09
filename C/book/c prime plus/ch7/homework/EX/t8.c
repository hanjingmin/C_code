/* t8.c -- 交互式程序设计   */

#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    float num1;
    float num2;
    int count = 0;
    float res;
    char temp;

    printf("Enter the operation of your choice:\n");
    printf("a. add              s. subtract\n");
    printf("m. multiply         d. divide\n");
    printf("q. quit\n");

    ch = getchar();
    // putchar(ch);
    while (ch != 'q')
    {
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");

        count = scanf("%f",&num2);
        while ((getchar()) != '\n') continue;   // 清除回车
        while (count == 0)
        {
            printf("Input is not an number!.\nPlease enter a number, such as 2.5,"
                "-1.78e8, 3:");
            count = scanf("%f",&num2);
            while ((getchar()) != '\n') continue;  
        }
        

        switch (ch)
        {
        case 'a':
            res = num1 + num2;
            printf("%.1f + %.1f = %.1f\n",num1,num2,res);
            break;
        case 's':
            res = num1 - num2;
            printf("%.1f - %.1f = %.1f\n",num1,num2,res);
            break;
        case 'm':
            res = num1 * num2;
            printf("%.1f * %.1f = %.1f\n",num1,num2,res);
            break;
        case 'd':
            if (num2 == 0)
            {
                printf("Error!  Please enter a non-zero number,:");
                scanf("%f",&num2);
                while ((getchar()) != '\n') continue;
            }
            res = num1 / num2;
            printf("%.1f / %.1f = %.1f\n",num1,num2,res);
            break;
        default:
            printf("Your input is not correct!\n");
            break;
        }
        printf("---------------------------------------------\n");
        printf("Enter the operation of your choice:\n");
        printf("a. add              s. subtract\n");
        printf("m. multiply         d. divide\n");
        printf("q. quit\n");
        printf("---------------------------------------------\n");

        ch = getchar();
    }
    printf("Bye.\n");
    return 0;
}