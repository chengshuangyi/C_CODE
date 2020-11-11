#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void left_move(char *str, int n)
{
	int len = strlen(str);
	n %= len;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		char temp = str[0];
		int j = 0;
		for (j = 1; j < len; j++)
		{
			str[j - 1] = str[j];
		}
		str[len - 1] = temp;
	}
}
int main()
{
	char arr1[20] = "abcdefg";
	char arr2[20] = "cdehgab";
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < len; i++)
	{
		//×óÐýÒ»´Î
		left_move(arr1, 1);
		if (strcmp(arr2, arr1)==0)
		{
			printf("YES\n");
			break;
		}
	}
	if (i == len)
	{
		printf("NO\n");
	}
	/*left_move(arr1, 3);
	printf("%s", arr1);*/

	return 0;
}