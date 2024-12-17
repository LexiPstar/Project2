#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//	%a, % A 读入一个浮点值(仅C99有效)
//	%c 读入一个字符
//	%d 读入十进制整数
//	%i 读入十进制，八进制，十六进制整数
//	%o 读入八进制整数
//	%x, %X 读入十六进制整数
//	%s 读入一个字符串，遇空格、制表符或换行符结束。
//	%f, % F, % e, % E, % g, % G 用来输入实数，可以用小数形式或指数形式输入。
//	%p 读入一个指针
//	%u 读入一个无符号十进制整数
//	%n 至此已读入值的等价字符数
//	%[] 扫描字符集合
//	%% 读% 符号

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
////假设p的值 0x100000，以下表达式是多少？
////已知，Test结构体变量大小是20字节
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