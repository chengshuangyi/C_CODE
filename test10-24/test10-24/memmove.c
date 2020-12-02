#define _CRT_SECURE_NO_WARNINGS 1
//模拟实现memmove
#include<stdio.h>
#include<assert.h>
#include<string.h>
void *my_memmove(void* dst, void *src, size_t num)
{
	void *ret = dst;
    assert(dst != NULL);
    assert(src != NULL);
	//正拷贝
	if ((dst < src) || ((char *)dst >= (char *)src + num))
	{
		while (num--)
		{
			*(char*)dst = *(char*)src;
			((char*)dst)++;
			((char*)src)++;
		}
	}
	//倒拷贝
	else
	{
		char *dst_end = (char *)dst + num - 1;
		char *src_end = (char *)src + num - 1;
		while (num--)
		{
			*(char*)dst_end = *(char*)src_end;
			((char*)dst_end)--;
			((char*)src_end)--;
		}
	}
	return ret;
}
int main()
{
	char arr1[20] = "      hello world";
	printf("%s", (char *)my_memmove(arr1, arr1+6,12));
	return 0;
}