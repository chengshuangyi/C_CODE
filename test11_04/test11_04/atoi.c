#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
enum State
{
	VALID,
	INVALID
};
enum State state = VALID;
int my_atoi(const char *str)
{
	int flag = 1;
	assert(str);
	state = INVALID;
	//���ַ����Ĵ���
	while (isspace(*str))
	{
		str++;
	}
	if (*str == '\0')
	{
		return 0;
	}
	//����+ -��
	if (*str == '+')
	{
		flag = +1;
		str++;
	}
	else if(*str=='-')
	{
		flag = -1;
		str++;
	}
	
	long long ret = 0;
	while (isdigit(*str))
	{
		ret = ret * 10 + flag * ((*str) - '0');
		//�ж�ret�Ƿ��ںϷ�ֵ��Χ
		if (ret > INT_MAX || ret < INT_MIN)
		{
			ret = 0;
			return (int)ret;
		}
		str++;	
	}
	if (*str == '\0')
	{
		state = VALID;
		return (int)ret;
	}
	return (int)ret;
}
 int main()
 {
	 char *p = "  -1234";
	 int ret = my_atoi(p);
	 if (state == VALID)
	 {
		printf("%d", ret);
	 }
	 return 0;
 }
 