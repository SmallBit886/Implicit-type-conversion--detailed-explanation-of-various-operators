#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	short s = 0;	//2个字节
//	int a = 10;		//4个字节
//	printf("%d\n", sizeof(s = a + 5));		//2个字节；sizeof(s = a + 5)【不参与运算】
//	printf("%d\n", s);						//s是0
//
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	////~按位取反
//	////000000000000000000000000  内存存的
//	////111111111111111111111111  补码=原码取反+1
//	////111111111111111111111110  反码=补码-1
//	////100000000000000000000001	原码
//	//printf("%d\n", ~a);	//-1
//
//	int a = 11;
//	//0000000000000001011
//	//第三位变成1（按位或4）
//	//1<<2
//	//0000000000000000100
//
//	int b = 4;
//	//0000000000000000100
//	a |= b;
//	printf("%d\n", a);
//	//第三位变成0（按位与）
//	a &= (~(1 << 2));//0000000000000000100
//					 //1111111111111111011
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);	//11【先++；后使用】
//	printf("%d\n", a++);	//10【先使用；再++】
//	printf("%d\n", a);		//11
//	return 0;
//}

//int main()
//{
//
//	int a = -10;
//	int* p = NULL;
//	printf("%d\n", !2);		//0
//	printf("%d\n", !0);		//1
//	a = -a;
//	p = &a;
//	printf("%d\n", *p);		//10
//	printf("%d\n", sizeof(a));	//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);	//4这样写行
//	//printf("%d\n", sizeof int);//这样写不行
//
//	return 0;
//}

//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2)
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4)
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)	40
//	printf("%d\n", sizeof(ch));//(3)	10
//	test1(arr);		//8
//	test2(ch);		//8
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 10;
//	//逻辑与
//	int c = a && b;
//	printf("%d\n", c);	//0
//	//逻辑或
//	int d = a || b;
//	printf("%d\n", d);	//1
//	
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;  //0
//	//i = a++||++b||d++;	//1
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//1 ; 2 ; 3 ; 4
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;  //1
//	//i = a++||++b||d++;	//1
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//2 ; 3 ; 3 ; 5
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;  //1
//	i = a++||++b||d++;	//1
//	printf("a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);//2 ; 2 ; 3 ; 4
//	return 0;
//}

//int main()	//三目操作符
//{
//	int a = 0;
//	int b = 0;
//	int c = 10;
//	int d = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//	printf("%d\n", b);	//-3
//	b = (c > 5 ? c:b);
//	printf("%d\n", b);	//10
//	b = (c > 11 ? c : d);
//	printf("%d\n", b);	//0
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 10;	//下标引用操作符（arr 和4是操作数）
//	return 0;
//}

//void test1()
//{
//	printf("hehe\n");
//}
//void test2(const char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	test1(); //实用（）作为函数调用操作符。操作数一个（text1）
//	test2("hello bit.");//实用（）作为函数调用操作符。
//	return 0;
//}

////创建一个结构体类型
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//使用这个结构体类型创建了一个对象s1
//	struct stu s1 = { "张三",20,"111212121" };
//	struct stu* ps = &s1;
//	//printf("%s\n", (*ps).name);
//	//printf("%d\n", (*ps).age);
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}

//int main()
//{
//	char a = 3;		//00000011
//	char b = 127;	//01111111
//	//整型提升
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//c ：10000010
//	//整型提升
//	//11111111111111111111111110000010  补码=反码+1
//	//11111111111111111111111110000001  反码
//	//10000000000000000000000001111110  原码
//	printf("%d\n", c);//-126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6; //1011 0110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)		//整型提升
//		printf("a");
//	if (b == 0xb600)	//整型提升
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");//c
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	//%u(无符号位的十进制)
//	printf("%u\n", sizeof(c));	//1
//	printf("%u\n", sizeof(+c));	//运算了；4,c只要参与表达式运算,就会发生整形提升,表达式 +c ,就会发生提升,所以 sizeof(+c) 是4个字节.
//	printf("%u\n", sizeof(!c));	//逻辑运算，返回的是布尔类型；1
//	return 0;
//}

int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i = %d\n", i);//4
	return 0;
}