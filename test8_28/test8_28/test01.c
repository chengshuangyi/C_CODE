#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,(3,4),5 };  //（3，4）为逗号表达式，取后者
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	/*str字符数组使用"hello bit"初始化，最终也会将'\0'放置到数组中，因此数组中总共有10个元素
//	sizeof(str)：获取数组的总大小，10个元素，每个元素占1个字节，因此总共是10个字节
//	strlen(str)：获取字符串中有效字符的个数，不算'\0'，因此总共9个有效字符
//	故上述printf会分别打印：10  9*/
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