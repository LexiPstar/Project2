#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//	%a, % A ����һ������ֵ(��C99��Ч)
//	%c ����һ���ַ�
//	%d ����ʮ��������
//	%i ����ʮ���ƣ��˽��ƣ�ʮ����������
//	%o ����˽�������
//	%x, %X ����ʮ����������
//	%s ����һ���ַ��������ո��Ʊ�����з�������
//	%f, % F, % e, % E, % g, % G ��������ʵ����������С����ʽ��ָ����ʽ���롣
//	%p ����һ��ָ��
//	%u ����һ���޷���ʮ��������
//	%n �����Ѷ���ֵ�ĵȼ��ַ���
//	%[] ɨ���ַ�����
//	%% ��% ����

//int main() 
//{
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", strlen(arr));
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////����p��ֵ 0x100000�����±��ʽ�Ƕ��٣�
////��֪��Test�ṹ�������С��20�ֽ�
//int main()
//{
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	//int a[3][2] = { (0,1),(2,3),(4,5) };
//	//int* p;
//	//p = a[0];
//	//printf("%d", p[0]);
//
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//-4
//	//10000000 00000000 00000000 00000100-yuan
//	//11111111 11111111 11111111 11111011-fan
//	//11111111 11111111 11111111 11111100-bu
//	//FF FF FF FC
//	return 0;
//}

int main()

{
	char* a[] = { "work","at","alibaba" };
	char** pa = a;
	pa++;
	printf("%s", *pa);
	return 0;
}