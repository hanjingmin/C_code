#include <stdio.h>
#include <string.h>
#include <errno.h>
// int main()
// {
// 	// 打开文件
// 	FILE* pf = fopen("test.txt","a+");
// 	if (pf == NULL)
// 	{
//         printf("Filed!\n");
// 		printf("%s\n",strerror(errno));
//         return 0;
// 	}
// 	// 写文件
// 	fputc('b',pf);
// 	fputc('a',pf);
// 	fputc('b',pf);
//     fputc('y',pf);
// 	// 关闭文件
// 	fclose(pf);
// 	pf = NULL;
// 	printf("Successfully!\n");

// 	return 0;
// }

int main()
{
	// 打开文件
	FILE* pfread = fopen("test.txt","a+");
	if (pfread == NULL)
	{
        printf("Filed!\n");
		printf("%s\n",strerror(errno));
        return 0;
	}
	// 读文件
	printf("%c\n",fgetc(pfread));
    printf("%c\n",fgetc(pfread));
    printf("%c\n",fgetc(pfread));
    printf("%c\n",fgetc(pfread));
	// 关闭文件
	fclose(pfread);
	pfread = NULL;
	printf("Successfully!\n");

	return 1;
}