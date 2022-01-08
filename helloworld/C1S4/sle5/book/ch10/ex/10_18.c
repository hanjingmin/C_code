/* vararr.c -- 使用变长数组的函数  */
#include <stdio.h>
#define ROWS 3
#define COLS 4

int sum2d(int raws, int cols, int ar[raws][cols]);

int main(void)
{
    int i,j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {
        { 2, 4, 6, 8 },
        { 3, 5, 7, 9 },
        { 12, 10, 8, 6 }
    };

    int morejunks[ROWS - 1][COLS + 2] = {
        { 20, 30, 40, 50, 60, 70 }, 
        { 5, 6, 7, 8, 9, 10}
    };

    int varr[rs][cs];       // 变长数(VLA)

    for ( i = 0; i < rs; i++)
        for ( j = 0; j < cs; j++)
            varr[i][j] = i * j + j;

    printf("3x5 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS,COLS,junk));

    printf("2x6 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS - 1,COLS + 2,morejunks));

    printf("3x10 array\n");
    printf("Sum of all elements = %d\n", sum2d(rs,cs,varr));

    return 0;

}



int sum2d(int raws, int cols, int ar[raws][cols])
{
    int r,c;
    int tot = 0;

    
    for ( c = 0; c < cols; c++)
        for ( r = 0; r < raws; r++)
            tot += ar[r][c];
    return tot;
    
}