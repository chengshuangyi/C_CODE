#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char *str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char arr[])
{
	char temp = arr[0];
	int len = my_strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (my_strlen(arr + 1) > 1)
		reverse_string(arr + 1);
	arr[len - 1] = temp;
}

////·ÇµÝ¹é
//void reverse_string(char *str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//
//	while (left < right)
//	{
//		char temp = str[left];
//		str[left] = str[right];
//		str[right] = temp;
//		left++;
//		right--;
//	}
//}
int main()
{
	char str[] = "abcdefg";
	printf("Ô­×Ö·û´®:%s\n", str);
	reverse_string(str);
	printf("·´Ïò×Ö·û´®:%s",str);
	
	return 0;
}