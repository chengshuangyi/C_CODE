#define _CRT_SECURE_NO_WARNINGS 1
//Ä£ÄâÊµÏÖstrstr
#include<stdio.h>
#include<assert.h>
char * my_strstr(const char *str1,const char* str2)
{
	assert(str1!= NULL);
	assert(str2!= NULL);
	while (*str1 != '\0')
	{
		if (*str1 != *str2)
		{
			str1++;
		}
		else
		{
			const char *str1_start = str1++;
			const char *str2_start = str2++;
			while ((*str1 == *str2) && (*str2 != '\0'))
			{
				str1++;
				str2++;
			}
			if (*str2 == '\0')
			{
				return (char *)str1_start;
			}
			else
			{
				str1 = str1_start+1;
				str2 =str2_start  ;
			}
		}
	}
	return NULL;
}
int main()
{
	char arr1[20] = { "This is simple" };
	const char *p = "simple";
	printf("%s", my_strstr(arr1, p));
	return 0;
}
