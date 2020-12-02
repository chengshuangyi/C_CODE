#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* my_strcpy(char* dst, const char* src)
{
	assert(dst != NULL);
	assert(src != NULL);
	char* ret = dst;
	while(*dst++=*src++)
	{
		;
	}
	return ret;
}
int main()
{
	char str1[20] = "hello bit";
	char str2[20] = "abcdefxxxxxxxx";
	printf("%s", my_strcpy(str2, str1));
	return 0;
}