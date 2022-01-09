/* 6_2.c -- 利用地址交换变量的值  */
#include <stdio.h>
void test0(int *i1, int *i2);
void test1(int *i1, int *i2);
void test2(int *i1, int *i2);

void main(void)
{
    int i1,i2,*p1,*p2;
    p1 = &i1;
    p2 = &i2;

    printf("输入两个数:");
    
    scanf("%d %d",p1,p2);    /* 利用scanf获得指针*/
    // test0(p1,p2);
    test1(p1,p2);
    // test2(p1,p2);
    
    printf("i1 = %d, i2 = %d\n", i1, i2);
    return;

}

void test0(int *p1, int *p2)
{
    int t;
 
    if (*p1 < *p2)
    {
        t = *p1; *p1 = *p2; *p2 = t;
    }
    
    return; 
}

void test1(int *p1, int *p2)    // 交换的是指针的地址
{
    int *t;
 
    if (*p1 < *p2)
    {
        t = p1; p1 = p2; p2 = t;
    }

    return; 
}

void test2(int *p1, int *p2)
{
    int *t;           // 没有感情的野指针
 
    if (*p1 < *p2)
    {
        *t = *p1;   // error
        *p1 = *p2; 
        *p2 = *t;
    }

    return; 
}



