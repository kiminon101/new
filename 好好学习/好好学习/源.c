#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>;
#include<string.h>

int main()
{
	int input = 0;
	
	printf("上了大学\n");
		printf("你要好好学习吗?(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("要努力\n");
	else
		printf("确定吗?\n");

	return 0;
}