#include <stdio.h>
struct ALPHA
{
	int a:2;
	int b:5;
	int c:10;
	int d:30;
};
int main()
{
	struct ALPHA s;
	printf("%ld",sizeof(s));
	return 0;
}

