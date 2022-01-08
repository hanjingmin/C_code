#define  _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp1(const void* p1, const void* p2) //提供的是整型数组元素大小的比较方式
{
	return (*(int*)p1 - *(int*)p2);
}

int cmp2(const void* elem1,const  void* elem2) //提供的是浮点型数组元素大小的比较方式
{
	return	 (*(float*)elem1 - *(float*)elem2);
}

struct stu2 {
	char name[20];
	int age;
};
int cmp3(const void* elem1, const void* elem2) //提供的是结构体中stu2中name成员的比较方式
{
	return  (strcmp(((struct stu2*)elem1)->name, ((struct stu2*)elem2)->name));
}

int cmp4(const void* elem1, const void* elem2)//提供的是结构体中stu2中age成员的比较方式
{
	return  (((struct stu2*)elem1)->age - ((struct stu2*)elem2)->age);
}

void customer_sort(void*base, int num, int width, int (*cmp)(const void*elem1,const void* elem2))
{
	int i = 0;
	for (; i < num - 1; i++)//确定排序趟数
	{
		for (int b = 0; b < num - 1 - i; b++)//每趟排序进行比较的次数
				{
			if (cmp(((char*)base + b * width), ((char*)base + (b + 1) * width)) > 0)
			//如果cmp函数返回值大于0，则进行交换
			{
				char tmp = 0;
				for (int j = 0; j < width; j++)
				{
					tmp = *((char*)base + b * width + j);
					*((char*)base + b * width + j) = *((char*)base + (b + 1) * width + j);
					*((char*)base + (b + 1) * width + j) = tmp;
				}
			}
		}
	}
}
int main()
{
	int arr1[10] = { 2,4,6,8,1,3,9,5,7,10 };
	float arr2[5] = { 3.0,5.0,1.0,7.0,8.0 };
	int sz = sizeof(arr1) / sizeof(*arr1);
	customer_sort(arr1, sz, sizeof(*arr1),cmp1);//如果要排序其他类型数组
	//把cmp函数换成对应的就行了
	for (int a = 0; a < sz; a++)
	{
		printf("%d ", arr1[a]);
	}
	return 0;
}