#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	short s = 0;	//2���ֽ�
//	int a = 10;		//4���ֽ�
//	printf("%d\n", sizeof(s = a + 5));		//2���ֽڣ�sizeof(s = a + 5)�����������㡿
//	printf("%d\n", s);						//s��0
//
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	////~��λȡ��
//	////000000000000000000000000  �ڴ���
//	////111111111111111111111111  ����=ԭ��ȡ��+1
//	////111111111111111111111110  ����=����-1
//	////100000000000000000000001	ԭ��
//	//printf("%d\n", ~a);	//-1
//
//	int a = 11;
//	//0000000000000001011
//	//����λ���1����λ��4��
//	//1<<2
//	//0000000000000000100
//
//	int b = 4;
//	//0000000000000000100
//	a |= b;
//	printf("%d\n", a);
//	//����λ���0����λ�룩
//	a &= (~(1 << 2));//0000000000000000100
//					 //1111111111111111011
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);	//11����++����ʹ�á�
//	printf("%d\n", a++);	//10����ʹ�ã���++��
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
//	printf("%d\n", sizeof a);	//4����д��
//	//printf("%d\n", sizeof int);//����д����
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
//	//�߼���
//	int c = a && b;
//	printf("%d\n", c);	//0
//	//�߼���
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

//int main()	//��Ŀ������
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
//	arr[4] = 10;	//�±����ò�������arr ��4�ǲ�������
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
//	test1(); //ʵ�ã�����Ϊ�������ò�������������һ����text1��
//	test2("hello bit.");//ʵ�ã�����Ϊ�������ò�������
//	return 0;
//}

////����һ���ṹ������
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	//ʹ������ṹ�����ʹ�����һ������s1
//	struct stu s1 = { "����",20,"111212121" };
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
//	//��������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b;
//	//c ��10000010
//	//��������
//	//11111111111111111111111110000010  ����=����+1
//	//11111111111111111111111110000001  ����
//	//10000000000000000000000001111110  ԭ��
//	printf("%d\n", c);//-126
//	return 0;
//}

//int main()
//{
//	char a = 0xb6; //1011 0110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)		//��������
//		printf("a");
//	if (b == 0xb600)	//��������
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");//c
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	//%u(�޷���λ��ʮ����)
//	printf("%u\n", sizeof(c));	//1
//	printf("%u\n", sizeof(+c));	//�����ˣ�4,cֻҪ������ʽ����,�ͻᷢ����������,���ʽ +c ,�ͻᷢ������,���� sizeof(+c) ��4���ֽ�.
//	printf("%u\n", sizeof(!c));	//�߼����㣬���ص��ǲ������ͣ�1
//	return 0;
//}

int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("i = %d\n", i);//4
	return 0;
}