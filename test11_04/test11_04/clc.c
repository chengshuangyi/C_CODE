#define _CRT_SECURE_NO_WARNINGS 1
/*���ÿ�����룬���Ϊһ�С�
�����������������ž��Ϸ��������һ�����ʽ��������1�����������2 = ������������С����������4λ��
���ͷ���֮��û�пո�
��������������Ų������ڣ� + �� - �� * �� / ����Χ�ڣ������Invalid operation!����
�������Ϊ�������㣬���� / ��ʱ�����������2����0.0���������Wrong!Division by zero!����*/
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