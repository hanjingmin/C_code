
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void BubbleSort(int arr[],int sz)
{
    int i, j,temp;
    for ( i = 0; i < sz - 1; i++)
    {
        for ( j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
}

struct Stu
{
    char name[20];
    int age;
};

int cmp_int(const void *e1,const void *e2)
{
    // 通过指针比较两个整型值
    return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void *e1,const void *e2)
{
    // 通过指针比较两个整型值
    return *(float*)e1 - *(float*)e2;
}

int cmp_struct1(const void *e1,const void *e2)
{
    // 通过指针比较两个整型值
    return ((struct Stu*)e1)->age - ((struct Stu*)e1)->age;
    }

int cmp_struct2(const void *e1,const void *e2)
{
    // 通过指针比较两个整型值
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e1)->name);
}



void test1()
{
    int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_int);
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void test2()
{
    float arr[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr,sz,sizeof(arr[0]),cmp_float);
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        printf("%2.1lf ",arr[i]);
    }
    printf("\n");
}

void test3()
{
    struct Stu arr[3] = {{"zhangsan",20},{"lisa",30},{"wangwu",10}};
    int sz = sizeof(arr) / sizeof(arr[0]);
    // qsort(arr,sz,sizeof(arr[0]),cmp_struct1);   // 结构体的第二条属性比较
    qsort(arr,sz,sizeof(arr[0]),cmp_struct2);   // name比较
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        printf("%s %d\n",arr[i].name,arr[i].age);
    }
    printf("\n");
}

void Swap(char * buf1, char * buf2, int width)
{
    int i;
    for ( i = 0; i < width; i++)
    {
        char temp = *buf1;
        *buf1 = *buf2;
        *buf2 = temp;
        buf1++;
        buf2++;
    }
    
}

void bubble_sort(void * base,int sz,int width,int (*cmp)(const void * e1,const void * e2))
{
    int i,j;
    for ( i = 0; i < sz - 1; i++)
    {
        for ( j = 0; j < sz-1-i; j++)
        {
            // 两个元素的比较
            if (cmp((char*)base + j*width,(char*)base + (j+1)*width) > 0)
            {
                // 交换
                Swap((char*)base + j*width,(char*)base + (j+1)*width,width);
            }
        }
        
    }
    
}

void test4()
{
    int sz;
    int arr[10] = { 1, 8, 7, 6, 5, 4, 3, 2, 9, 0};
    sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,sz, sizeof(arr[0]),cmp_int);
    int i = 0;
    for ( i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(void)
{

    // test1();
    // test2();
    // test3();
    test4();

    return 0;
    
}


