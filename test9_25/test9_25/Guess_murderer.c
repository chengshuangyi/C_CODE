#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������
//��ҵ����
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ��������������Щ��Ϣ��дһ��������ȷ������˭�����֡�
char Find_murderer()
{
	char murderer = 'A';
	for (murderer = 'A'; murderer <= 'D'; murderer++)
	{
		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
		{
			return murderer;
		}
	}
}
int main()
{
	char murderer=Find_murderer();
	printf("������:%c\n", murderer);
	return 0;
}