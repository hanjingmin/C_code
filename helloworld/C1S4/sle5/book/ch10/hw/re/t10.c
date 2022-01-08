/* 判断有效性 */
#include <stdio.h>
// void test(int *r1)
// {
//     scanf("%f", r1);
// }
void main(void)
{
    float rootbeer[10], things[10][5], *pf, value = 2.2;
    int i = 3;
    // rootbeer[2] = value; //yes
    
    // scanf("%f", &rootbeer);  // no

    // rootbeer = value; // no
    // test(rootbeer);

    // printf("%f",rootbeer); // no
    things[4][4] = rootbeer[3];
    things[5] = rootbeer;  // no
    pf = value;         //no
    pf = rootbeer;  // yes


}