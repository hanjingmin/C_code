#include <stdio.h>

struct Teacher
{
    char name[20];
    int weight;
    char id[23];
};

struct Student
{
    struct Teacher Q;
    char name[20];
    int weight;
    char id[23];
};


void printf1(struct Student Book1)
{
    printf("%s %d %s %s %d %s\n",Book1.Q.name,Book1.Q.weight,Book1.Q.id,Book1.name,Book1.weight,Book1.id);
}

int main(void)
{
    int a[] = {1,2,3};
    struct Student Book1 = {{"Yan Qian",120,"2019111250"},"LittlePrince",200,"2019111238"};
    printf("%s\n%d\n%s\n",Book1.name,Book1.weight,Book1.id);
    printf("%s\n%d\n%s\n",Book1.Q.name,Book1.Q.weight,Book1.Q.id);

    struct Student* ps = &Book1;
    printf("指针%s\n",ps->Q.name);
    printf("指针->%s\n",(*ps).Q.name);

    // 结构体传参
    printf1(Book1);

    return 0;
}