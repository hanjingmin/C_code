

#include <stdio.h>

// int main(void)
// {
//     int i = 0;
//     for (i=0;i<100;i++)
//     {
//         printf("%d ",i);
//     }
//     for (i=0;i<100;i++)
//     {
//         printf("%d ",10 - i);
//     }
//     return 0;
// }


// int main(void)
// {
//     int i = 0;
//     // int count = 0;
//     int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//     for ( i = 0; i <=12 ; i++)
//     {

//         // count++;
//         arr[i] = 0;
//         printf("hehe\n");
//     }
//     // printf("%d\n",count);
//     return 0;
// }



#include <stdio.h>
#include <assert.h>

void my_strcpy(char *dest, char *src)
{
    assert(dest != NULL);
    assert(src != NULL);

    while (*dest++ = *src++);
}

int main(void)
{
    char ar1[] = "################";
    char ar2[] = "bit";
    my_strcpy(ar1,NULL);
    printf("%s\n",ar1);
    return 0;
}