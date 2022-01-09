/* test7.c --计算身高英寸转换厘米  */
#include <stdio.h>
int main()
{
    double arch = 2.54 ;
    double hight ;
    printf("please input your hight: （英寸）");
    scanf("%lf",&hight);
    printf("You have %.2f cms.\n",hight * arch);

    return 0;

}