#define _CRT_SECURE_NO_WARNINGS 1
//strlen实现
//作业内容
//模拟实现库函数strlen
#include<stdio.h>
#include<assert.h>
int my_strlen(char *str)
{
	int count = 0;
	assert(str != NULL);
	while (*str++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[100] = "abcdefggg";
	const char*p = arr;
	int len = my_strlen(p);
	printf("%d\n", len);
	return 0;
}