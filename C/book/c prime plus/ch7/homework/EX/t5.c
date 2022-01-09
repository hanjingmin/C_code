/* t5.c  -- 猜数字程序 */
#include <stdio.h>
int main(void)
{
    int guess = 50;
    int min = 1;
    int max = 100;
    char response;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is big and with");
    printf("\nan n if it is small.\n");
    printf("Uh...is your number bigger than %d?\n",guess);
    while (min <= max)
    {
        guess = (min + max) / 2;
        
        while ((response = getchar()) != '\n')
            {
        if ((response) == 'y')
        {
            min = guess + 1;
            printf("Well, then, is it bigger than %d?\n",(min + max) / 2);
        }
        else if ((response) == 'n')
        {
            max = guess - 1;
            printf("Well, then, is it bigger than %d?\n",(min + max) / 2);
        }
        else
        {
            printf("Sorry, I understand only y or n.\n");
        }
            continue;}
        
    }
    printf("\n\n");
    printf("I knew I could do it!\n");
    printf("The answer is %d........\n",guess);
    return 0;
}

