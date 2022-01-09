#include <stdio.h>
#define TEMP 0.3937008
int main()
{
    float high;
    char name[20];
    printf("Please input your name and height:");
    scanf("%s %f",name,&high);
    printf("%s,you are %.3f feet tall!\n",name,high * TEMP);

    return 0;

}