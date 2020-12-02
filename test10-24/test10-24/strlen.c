#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//Ä£ÄâÊµÏÖstrlen
int my_strlen(const char* str)
{
	assert(str != NULL);
	int ret = 0;
	while (*str)
	{
		ret += 1;
		str++;
	}
	return ret;
}
int main()
{
	char str[20] = "abcdefsss";
	printf("%d", my_strlen(str));
	return 0;
}
