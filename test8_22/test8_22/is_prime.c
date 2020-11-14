#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int y)
{
	int i = 0;
	for (i = 2; i <= sqrt(y); i++)
	{
		if (y%i == 0)
		return 0;
	}
	return 1;

}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
