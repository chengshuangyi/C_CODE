#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
#include<stdio.h>
//�ݹ�
//int EmptyBottle(int x)
//{
//	int ret = x / 2;//��ƿ�һ�����ˮ����
//	int empty = x / 2 + x % 2;//�һ�����ˮ��ʣ�µĿ�ƿ����֮��
//	if (empty > 1)
//		return ret + EmptyBottle(empty);
//	else
//		return ret;
//}

//�ǵݹ�
int EmptyBottle(int x)
{
	int ret = 0;
	while (x > 1)
	{
		ret += x / 2;		//xû�з����ı䣬��ret��¼�ܹ�������ˮ������
		x = x / 2 + x % 2;	//xʣ���ƿ������
	}
	return ret;
}


int main()
{
	int x = 20;
	int num = 20 + EmptyBottle(20);
	printf("%d\n", num);
	return 0;
}
