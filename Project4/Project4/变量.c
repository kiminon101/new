#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	char arr1[] = "abc";//数组
	//"abc"='a','b','c','\0'--\0是字符串的结束标志
	char arr2[] = { 'a', 'b', 'c',0 };
	printf("%s\n", arr1);
	printf("%s\n", arr2);

	return 0;
}