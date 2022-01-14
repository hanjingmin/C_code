
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) 
        {
            if (nums[i] + nums[j] == target) 
            {
                int* ret = malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void)
{
    int arr[] = {2,7,11,15};
    int target = 9;
    int *ret;
    int number;
    ret = twoSum(arr,sizeof(arr),target,&number);
    if (number == 0)
    {
        printf("None\n");
    }
    else
    {
        printf("%d %d\n",ret[0],ret[1]);
    }

    return 0;
}