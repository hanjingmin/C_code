/*  t2.c    */
#include <stdio.h>
#include <string.h>
int main()
{
    char name1[40];
    char name2[20];
    char name3[60]= "\"";
    int length;

    printf("Please input your name:");
    scanf("%s %s",name1,name2);
    strcat(name1,",");
    strcat(name1,name2);
    strcat(name3,name1);
    strcat(name3,"\"");
    strcat(name3,"\0");

    length = strlen(name3) + 3;
    printf("*%s*\n",name3);
    // printf("%d\n",strlen(name3)); //计算字符串长度
    printf("*%+*s*\n",20,name3);
    printf("*%-*s*\n",20,name3);
    printf("*%-*s*\n",length,name3);

    return 0;

}


// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name1[20];
//     printf("Please input your name:");
//     scanf("%s",name1);
//     printf("\"%s\"\n",name1);
//     // printf("%s\n",rw);

//     return 0;

// }