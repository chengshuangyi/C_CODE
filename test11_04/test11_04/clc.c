#define _CRT_SECURE_NO_WARNINGS 1
/*针对每组输入，输出为一行。
如果操作数和运算符号均合法，则输出一个表达式，操作数1运算符操作数2 = 运算结果，各数小数点后均保留4位，
数和符号之间没有空格。
如果输入的运算符号不包括在（ + 、 - 、 * 、 / ）范围内，输出“Invalid operation!”。
当运算符为除法运算，即“ / ”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”。*/
#include<stdio.h>
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	char ch;
	scanf("%lf %c %lf", &a, &ch, &b);
	switch(ch)
	{
	case '+':
	{
		c = a + b;
		printf("%.4lf+%.4lf=%.4lf", a, b, c);
		break;
	}
	case '-':
	{
		c = a - b;
		printf("%.4lf-%.4lf=%.4lf", a, b, c);
		break;
	}
	case '*':
	{
		c = a * b;
		printf("%.4lf*%.4lf=%.4lf", a, b, c);
		break;
	}
	case '/':
	{
		if (b == 0)
		{
			printf("Wrong!Division by zero!");
			break;
		}
		else
		{
			c = a / b;
			printf("%.4lf/%.4lf=%.4lf", a, b, c);
			break;
		}	
	}
	default:
	{
		printf("Invalid operation!\n");
		break;
	}
	}
	return 0;
}