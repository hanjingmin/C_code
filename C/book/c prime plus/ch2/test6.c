#include <stdio.h>
int main()
{
    int toes = 10;
    int results;
    results = toes * 2 + toes * toes;
    printf("%d = %d * 2 + %d * %d\n", results,toes,toes,toes);
    return 0;
}