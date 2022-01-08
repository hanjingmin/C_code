#include <stdio.h>
float f_cube(float para);
int main(void)
{
    float para;
    float results;

    printf("Enter a number:\n");
    scanf("%f",&para);
    results = f_cube(para);
    printf("The cube of %.1f is %.2f!\n",para,results);

    return 0;

}
float f_cube(float para)
{
    float res;
    res = para*para*para;
    return res;
}