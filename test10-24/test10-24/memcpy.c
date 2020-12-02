#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖmemcpy
#include<stdio.h>
#include<assert.h>
void *my_memcpy(void* dst, const void* src, size_t num)
{
	void* ret = dst;
	assert(dst != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char* )dst = *(char*)src;
		((char*)dst)++;
		((char*)src)++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello world";
	char arr2[20] = {"hello worllld bit"};
	printf("%s", my_memcpy(arr2, arr1,sizeof(char)*11));
}