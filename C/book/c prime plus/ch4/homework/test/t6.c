/*  */
#include <stdio.h>
#include <string.h>
int main()
{
    char name1[20];
    char name2[12];
    int num1,num2;
    printf("Please input your First Name:\n");
    scanf("%s",name1);
    printf("Please input your Last Name:\n");
    scanf("%s",name2);

    num1 = strlen(name1);
    num2 = strlen(name2);

    printf("%s %s\n",name1,name2);
    printf("%-*d ",num1,num1);
    printf("%-*d\n",num2,num1);

    printf("%s %s\n",name1,name2);
    printf("%*d ",num1,num1);
    printf("%*d\n",num2,num1);

}