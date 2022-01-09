/*  */   
#include <stdio.h>          
void bubble_sort(int arr[],int size)
{
    int i,j,temp;
    int flat = 1;
    for (i = size - 1; i >= 0; i--)
        {
            for ( j = i - 1; j >= 0; j--)
            {
                if (arr[i] < arr[j])
                    {
                        temp = arr[i];
                        arr[i] = arr[j]; arr[j] = temp;
                        flat = 0;
                    }
            }
            if (flat == 1) break;
        }
}

int main(void)
{
    int arr[] = {7,4,7,5,1};
    int sz,i;

    sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,sz);

    printf("The array is sorted as:\n");
    for (i = 0;i< sz;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;

}