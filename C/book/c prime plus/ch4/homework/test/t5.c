/* t5.c -- 输入输出函数 */
#include <stdio.h>

int main()
{
    float download_speed;
    float download_size;
    float download_time;
    printf("Please input your download speed(Mb/s):\n");
    scanf("%f",&download_speed);
    printf("Please input your download size(MB):\n");
    scanf("%f",&download_size);

    download_time = download_size * 8 /download_speed;

    printf("At %2.2f megabits per second, a file of %2.2f megabytes\ndownloads in %2.2f senonds\n",download_size,download_speed,download_time);

    return 0;
} 