#define _CRT_SECURE_NO_WARNINGS 1
//�ַ�������
//��ҵ����
//дһ����������������һ���ַ��������ݡ�
#include<stdio.h>
#include<string.h>
void reverse(char * str, int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char str[] = "abcdefg";
	int len = strlen(str);
	reverse(str, len);
	printf("%s ", str);
	return 0;
}
