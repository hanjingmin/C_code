#include <stdio.h>
#define BOOK "War and Peace"
int main()
{
    double temp = 232.346;
    float cost = 12.99;
    float percent = 80.0;
    printf("This copy of \"%s\" sells for $%2.2f\n",BOOK,cost);
    printf("That is %2.0f of list\n",percent);
    printf("%f\n",temp);
    printf("%*s\n",strlen(BOOK),BOOK);
    return 0;
}

// printf("%*d\n",strlen(temp),temp);
// %00d
// 
//
//