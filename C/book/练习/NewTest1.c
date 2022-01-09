#include <stdio.h>
int main()
{
    // char arr[] = "abcdef";
	// //[a b c d e f \0]
	// printf("%d\n", strlen(arr));   // 6
	// printf("%d\n", strlen(arr + 0));    // 6
	// //printf("%d\n", strlen(*arr));
	// //printf("%d\n", strlen(arr[1]));
	// printf("%d\n", strlen(&arr));   // 6
	// printf("%d\n", strlen(&arr + 1)); // 0
	// printf("%d\n", strlen(&arr[0] + 1));    // 5


    // char arr[] = "abcdef";
	// //[a b c d e f \0]
    // printf("%d\n", sizeof(arr));  //  7
	// printf("%d\n", sizeof(arr + 0));    // 4/8
	// printf("%d\n", sizeof(*arr));   //1
	// printf("%d\n", sizeof(arr[1]));  // 1
	// printf("%d\n", sizeof(&arr));   // 4/8 
	// printf("%d\n", sizeof(&arr + 1));  // 4/8
	// printf("%d\n", sizeof(&arr[0] + 1));  // 4/8
    
	// char* p = "abcdef";

	// printf("%d\n", sizeof(p));          // 4/8
	// printf("%d\n", sizeof(p + 1));      // 4/8
	// printf("%d\n", sizeof(*p));         // 1
	// printf("%d\n", sizeof(p[0]));       // 1
	// printf("%d\n", sizeof(&p));         // 4/8
	// printf("%d\n", sizeof(&p + 1));     // 4/8
	// printf("%d\n", sizeof(&p[0] + 1));  // 4/8

// 77777777777777
    char* p = "abcdef";
    printf("%d\n", strlen(p));              // 6
    printf("%d\n", strlen(p + 1));          // 5 
    // printf("%d\n", strlen(*p));             // e
    // printf("%d\n", strlen(p[0]));           // e
    printf("%d\n", strlen(&p));             // 6
    printf("%d\n", strlen(&p + 1));         // 0随机值
    printf("%d\n", strlen(&p[0] + 1));      // 5

    return 0;

}