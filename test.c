#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include "add.h"
#include <stddef.h>

//int main()
//{
//	int ret = Add(2, 3);
//	printf("ret=%d\n",ret);
//	return 0;
//}




//模拟实现offsetof(偏移量)
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	//printf("%d\n", offsetof(struct S, c1));//0
//	//printf("%d\n", offsetof(struct S, a));//4
//	//printf("%d\n", offsetof(struct S, c2));//8
//	return 0;
//}










//位段题目


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
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);//02 29 00 00
//	return 0;
//}







//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n",sizeof(union Un));//16
//}










//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n",a.k);//3839
//	return 0;
//}










