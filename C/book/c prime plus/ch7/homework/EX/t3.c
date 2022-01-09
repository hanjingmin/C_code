/*  */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int cnt_lower = 0;
    int cnt_upper = 0;
    char ch;

    printf("Please input your message:\n");
    while ((ch = getchar()) != EOF)
    {
        // while (getchar() != '\n')
        //     continue;
        
        if (islower(ch))
        {
            cnt_lower++;
        }
        else if (isupper(ch))
        {
            cnt_upper++;
        }
    }
            
    printf("lower word:%d ; upper words:%d\n",cnt_lower,cnt_upper);

    return 0;

}