#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int n)
{
	if(((n%4==0)&&(n%100!=0))||(n%400==0))
		return 1;
	return 0;
}
int main()
{
	int y = 0;
	printf("���������:");
	scanf("%d", &y);
	if (is_leap_year(y) == 1)
		printf("%d������", y);
	else
		printf("%d��������", y);
	return 0;
}