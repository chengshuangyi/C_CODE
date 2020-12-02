#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
int my_strcmp(const char* dst, const char* src)
{
	assert(dst != NULL);
	assert(src != NULL);
	int ret = 0;
	while (*dst && *src)
	{
		ret = *dst - *src;
		if (ret > 0)
		{
			return 1;
		}
		else if (ret < 0)
		{
			return -1;
		}
		else
		{
			dst++;
			src++;
		}
	}
	if (*src)
	{
		return -1;
	}
	else if (*dst)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char str1[20] = "abcdef";
	char str2[20] = "abcdef";
	printf("%d", my_strcmp(str1, str2));
	return 0;
}