#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 20000)
	{
		printf("敲一行代码:%d\n",line);
		line++;
	}
	printf("好offer\n");
	return 0;
}