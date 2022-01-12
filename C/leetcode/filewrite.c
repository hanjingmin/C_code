#include <stdio.h>
struct S
{
    char name[20];
    int number;
    char arr[20];
};

int main(void)
{
    struct S s = {"Qian yan",2019111250,"very beautiful!"};
    FILE * pf = fopen("test.txt","w");
    if (pf == NULL)
    {
        return 0;
    }
    fprintf(pf,"%s %d %s",s.name,s.number,s.arr);

    fclose(pf);
    pf = NULL;
    
    return 0;
}