#define _CRT_SECURE_NO_WARNINGS 1
//ģ��ʵ��strcat
#include<stdio.h>
#include<assert.h>
char * my_strcat(char* dst, const char* src)
{
	char *ret = dst;
	assert(dst != NULL);
	assert(src != NULL);
	//�ҵ�Ŀ���ַ�����'\0'��λ��
	while (*dst)
	{
		dst++;
	}
	//��Դ�ַ��������ݽ��п���
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