#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现strcat
#include<stdio.h>
#include<assert.h>
char * my_strcat(char* dst, const char* src)
{
	char *ret = dst;
	assert(dst != NULL);
	assert(src != NULL);
	//找到目的字符串中'\0'的位置
	while (*dst)
	{
		dst++;
	}
	//将源字符串的数据进行拷贝
	while (*dst++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	const char *p = "world";
	printf("%s", my_strcat(arr1, p));
	return 0;
}