#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 0;
	int y = 0;
	printf("请输入两个数：");
	scanf("%d%d",&x,&y);
	printf("x y交换前%d  %d:", x, y);
	swap(&x,&y);
	printf("x y交换后%d  %d:", x, y);
	return 0;
}
