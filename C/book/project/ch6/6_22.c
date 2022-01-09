#include <stdio.h>
// #include <process.h>
char *day_name(int n)
{
    char *name[] = {"Illegalday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    return ((n < 1 || n > 7 ) ? name[0]:name[n]);
}

int main(void)
{
    int i;
    printf("Input Day No:");
    scanf("%d",&i);
    if (i<0) printf("error\n");
    printf("Day No.%2d -> %s\n",i,day_name(i));

    return 0;

}