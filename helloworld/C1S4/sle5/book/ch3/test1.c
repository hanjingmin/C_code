/* 整数上溢 浮点数上溢 浮点数下溢*/
#include <stdio.h>
#include <math.h>
int main()
{
    int int_temp = 2147483648;
    printf("-------------------------------\n");
    printf("the size of int is %d\n",sizeof(int));
    printf("the size of double is %d\n",sizeof(double));
    printf("-------------------------------\n");

    printf("int_temp is %d\n",int_temp);
    printf("The result is %f\n",pow(2,31));
    printf("-------------------------------\n");

    double up_double_temp = 6703903964971298549787012499102923063739682910296196688861780721860882015036773488400937149083451713845015929093243025426876941405973284973216824503042048;
    // printf("the size of double is %ld\n",sizeof(double));
    printf("The result is %e\n",pow(2,511));
    printf("up_double_temp is %e\n",up_double_temp);
    printf("-------------------------------\n");

    double up_double_not_temp = 6703903964971298549787012499102923063739682910296196688861780721860882015036773488400937149083451713845015929093243025426876941405973284973216824503042047;
    // printf("the size of double is %ld\n",sizeof(double));
    printf("The result is %e\n",pow(2,511));
    printf("up_double_not_temp is %e\n",up_double_not_temp);
    printf("-------------------------------\n");

    double down_double_not_temp = -6703903964971298549787012499102923063739682910296196688861780721860882015036773488400937149083451713845015929093243025426876941405973284973216824503042047;
    // printf("the size of double is %ld\n",sizeof(double));
    printf("The result is %e\n",pow(2,511));
    printf("down_double_not_temp is %e\n",down_double_not_temp);
    printf("-------------------------------\n");

    double down_double_temp = -6703903964971298549787012499102923063739682910296196688861780721860882015036773488400937149083451713845015929093243025426876941405973284973216824503042048;
    // printf("the size of double is %ld\n",sizeof(double));
    printf("The result is %e\n",pow(2,511));
    printf("down_double_temp is %e\n",down_double_temp);
    printf("-------------------------------\n");

    return 0;
}
