#define _CRT_SECURE_NO_WARNINGS 1
//ѧ����Ϣ�������
/*��������:
	ѧ���Լ�3�Ƴɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ�����
	ʾ��:
		����
		17140216; 80.845, 90.55, 100.00
		���
		The each subject score of  No. 17140216 is 80.85, 90.55, 100.00.*/
#include<stdio.h>
int main()
{
	long long id = 0;
	int a = 0;
	float b = 0.0;
	float c = 0.0;
	printf("��������һ��ѧ����ѧ�ţ��Լ�3�ƣ�C���ԣ���ѧ��Ӣ��ɼ���ѧ�źͳɼ�֮����Ӣ�ķֺŸ������ɼ�֮����Ӣ�Ķ��Ÿ���\n");
	scanf("%ld; %d, %f,%f", &id, &a, &b, &c);
	printf("The each subject score of  No. %ld is %d, %.2f, %.2f", id, 12, b, c);
	return 0;
}
