#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	
//	return 0;
//}
//
//struct tag
//{
//	member_list;
//}variable_list;
//
//struct Stu
//{
//	char name[20];  //姓名
//	int age;        //年龄
//	char sex[5];    //性别
//	char id[20];    //学号
//};

//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//}

//enum Day
//{
//	Mon,  //如果没赋初值，默认从0开始，依次增加1
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};

union Un
{
	int i;
	char c;
};
union Un un;
int main()
{
	printf("%p\n", &(un.i));
	printf("%p\n", &(un.c));
}

//union Un1 
//{
//	char c[5];
//	int i;
//};
//union Un2
//{
//	short c[7];
//	int i;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un1));
//	printf("%d\n", sizeof(union Un2));
//}
