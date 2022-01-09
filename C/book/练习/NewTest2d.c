// 二维数组
#include <stdio.h>
// int main(void)
// {
//     // int a[3][4] = { 0 };

//     // printf("%d\n", sizeof(a));                      // 48
//     // printf("%d\n", sizeof(a[0][0]));                // 4
//     // printf("%d\n", sizeof(a[0]));                   // 16
//     // printf("\n");
//     // printf("%d\n", sizeof(a[0] + 1));               // 4/8
//     // printf("%d\n", sizeof(*(a[0] + 1)));            // 4
//     // printf("\n");
//     // printf("%d\n", sizeof(a + 1));                  // 4/8
//     // printf("%d\n", sizeof(*(a + 1)));               // 16
//     // printf("\n");
//     // printf("%d\n", sizeof(&a[0] + 1));              // 4/8
//     // printf("\n");
//     // printf("%d\n", sizeof(*(&a[0] + 1)));           // 16
//     // printf("\n");
//     // printf("%d\n", sizeof(*a));                     // 16
//     // printf("\n");
//     // printf("%d\n", sizeof(a[3]));                   // 16
//     // printf("%d\n", sizeof(a[-1]));                  // 16



//     int a[5] = { 1, 2, 3, 4, 5 };
//     int* ptr = (int*)(&a + 1);
//     printf("%d,%d", *(a + 1), *(ptr - 1));

//     return 0;

// }


struct Test
{
	int Num;        // 4
	char* pcName;  // 8
	short sDate;    // 2
	char cha[2];    // 2 * 1
	short sBa[4];   // 2 * 4
}* p;    // 结构体指针定义


int main()
{   
    
    // p = (struct Test*)0x100000;
	// printf("%p\n", p + 1);
	// printf("%p\n", (unsigned long)p + 0x1);
	// printf("%p\n", (unsigned int*)p + 0x1);

    //    int a[4] = { 1, 2, 3, 4 };
    //    int* ptr1 = (int*)(&a + 1);
    //    int* ptr2 = (int*)((int)a + 1);

    //    printf("%x,%x", ptr1[-1], *ptr2);
    // int a[3][2] = { (0, 1), (2, 3), (4, 5) };
    // int* p;
    // p = a[0];
    // printf("%d", p[0]);


    // int a[5][5];
    // int(*p)[4];
    // p = a;
    // printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	
    char * c[] = { "ENTER", "NEW", "POIN", "FIRST"};
    char **cp[] = { c + 3, c + 2, c + 1, c};
    char ***cpp = cp;

    printf("%p      数组指针c地址 %s\n",c,*c);
    printf("%p      c结尾地址   %s\n",c + 3, *(c + 3));
    printf("%p      c + 3    %s\n",c + 3,*(c + 3));
    printf("%p      *cp地址\n",*cp);
    printf("%p      cp地址\n",cp);
    printf("%p      cpp地址\n",cpp);
    printf("%p      ++cpp地址\n",++cpp);
    // printf("%s\n",**++cpp);
    // printf("%s\n",*--*++cpp + 3);
    // printf("%s\n", *cpp[-2] + 3);
    // printf("%s\n", cpp[-1][-1] + 1);
    
    return 0;
}