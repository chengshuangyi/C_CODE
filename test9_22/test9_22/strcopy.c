#define _CRT_SECURE_NO_WARNINGS 1
//strcpyʵ��
//��ҵ����
//ģ��ʵ�ֿ⺯��strcpy
#include<stdio.h>
char * my_strcopy(char * dst,const char *src)
{
	char *p = dst;
	while (*src)
	{
		*dst++ = *src++;
	}
	return p;
}
int main()
{
	char arr1[100] = "abcdefg";
	char arr2[100] = "xxxxxxx";
	printf("%s\n", my_strcopy(arr2, arr1));
	return 0;
}
