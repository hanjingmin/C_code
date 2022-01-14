/* 顺序表的实现 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#define LIST_INIT_SIZE 100  // 线性储存空间的初始分配量
typedef int ElemType;
typedef int Status;
// 线性表结构
typedef struct
{
    ElemType * elem;
    int length;
    int listsize;
}SqList;

// 线性表初始化
Status InitList_Sq(SqList *L)
{
    L->elem = (ElemType *) malloc( LIST_INIT_SIZE * sizeof(ElemType));
    if (!(L->elem))
    {
        exit(0);
    }
    L->length = 0;
    L->listsize = LIST_INIT_SIZE;
    return 1;
}

void CreateList(SqList *L, int len)
{
    if (len > LIST_INIT_SIZE)   // 顺序表大下大于初始化列表，需重新分配空间
    {
        L->elem = (ElemType *) realloc(L->elem, len * sizeof(ElemType));
        L->listsize = len;
    }
    printf("请输入顺序表元素: \n");
    for (int i = 0; i <= len-1; i++)
    {
        scanf("%d",&((L->elem)[i]));
    }
    L->length = len;
    printf("建立的顺序表为: \n");
    for (int i = 0; i <= len-1; i++)
    {
        printf("%d ",(L->elem)[i]);
    }
    printf("\n顺序表一共%d个元素。\n",L->length);
}

void main(void)
{
    SqList *L;
    int Sqlen;
    if (!InitList_Sq(L))
    {
        printf("初始化顺序表失败!\n");
        exit(0);
    }
    printf("输入顺序表个数: ");
    scanf("%d",&Sqlen);
    CreateList(L,Sqlen);

}