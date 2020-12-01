#define _CRT_SECURE_NO_WARNINGS 1
//学生信息输入输出
/*输入描述:
	学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。
	示例:
		输入
		17140216; 80.845, 90.55, 100.00
		输出
		The each subject score of  No. 17140216 is 80.85, 90.55, 100.00.*/
#include<stdio.h>
int main()
{
	long long id = 0;
	int a = 0;
	float b = 0.0;
	float c = 0.0;
	printf("依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开\n");
	scanf("%ld; %d, %f,%f", &id, &a, &b, &c);
	printf("The each subject score of  No. %ld is %d, %.2f, %.2f", id, 12, b, c);
	return 0;
}
