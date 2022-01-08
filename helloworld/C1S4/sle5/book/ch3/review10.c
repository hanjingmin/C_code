/* This is a program*/
#include <stdio.h>
int main()
{
    double cows,legs;
    printf("How many cow legs did you count?\n");
    scanf("%le",&legs);
    cows = legs / 4;

    printf("That implies there are %f cows.\n",cows);

    return 0;
}