#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };  //��3��4��Ϊ���ű��ʽ��ȡ����
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	/*str�ַ�����ʹ��"hello bit"��ʼ��������Ҳ�Ὣ'\0'���õ������У�����������ܹ���10��Ԫ��
//	sizeof(str)����ȡ������ܴ�С��10��Ԫ�أ�ÿ��Ԫ��ռ1���ֽڣ�����ܹ���10���ֽ�
//	strlen(str)����ȡ�ַ�������Ч�ַ��ĸ���������'\0'������ܹ�9����Ч�ַ�
//	������printf��ֱ��ӡ��10  9*/
//	return 0;
//}
int main()
{
	char acX[] = "abcdefg";
	char acY[] = { 'a','b','c','d','e','f','g','a','b','c','d','e','f','g', 'a','b','c','d','e','f','g','a','b','c','d','e','f','g', 'a','b','c','d','e','f','g' };
	char acZ[] = { 'a','b','c','d','e','f','g' };
	printf("%d    %d  %d", strlen(acX), strlen(acY), strlen(acZ));
	return 0;
}