/* 发生一声警报 并打印文本 */
#include <stdio.h>
int main()
{
    char alert = '\007';
    printf("%c",alert);
    printf("\aStartled by the sudden sound, Sally shouted,\n\"By the Great Pumpkin, what was that!\"\n");
    return 0;
}