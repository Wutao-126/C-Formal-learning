# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int i = 0;
//	while ( i = 0)
//	{
//		printf("%d", i);
//		i--;
//	}
//	return 0;
//}




//void Print(double a1, double a2, double b1, double b2)
//{
//	if (a1 < b1)
//	{
//		if (a2 / b2 > 0)
//		{
//			printf("%.0lf/%.0lf + %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 + a2 / b2 * b1, b1);
//			printf("%.0lf/%.0lf - %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 - a2 / b2 * b1, b1);
//			printf("%.0lf/%.0lf * %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 * (a2 / b2), b1);
//			printf("%.0lf/%.0lf - %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 / (a2 / b2), b1);
//		}
//		else if (a2 / b2 == 0)
//		{
//			printf("%.0lf/%.0lf + %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 + a2 / b2 * b1, b1);
//			printf("%.0lf/%.0lf - %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 - a2 / b2 * b1, b1);
//			printf("%.0lf/%.0lf * %.0lf = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 * (a2 / b2), b1);
//			printf("%.0lf/%.0lf - %.0lf = Inf\n", a1, b1, a2 / b2);
//		}
//		else
//		{
//			printf("%.0lf/%.0lf + (%.0lf) = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 + a2 / b2 * b1, b1);
//			printf("%.0lf/%.0lf - (%.0lf) = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 - a2 / b2 * b1, b1);
//			printf("%.0lf/%.0lf * (%.0lf) = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 * (a2 / b2), b1);
//			printf("%.0lf/%.0lf - (%.0lf) = %.0lf/%.0lf\n", a1, b1, a2 / b2, a1 / (a2 / b2), b1);
//		}
//	}
//}
//int main()
//{
//	double a1 = 0;
//	double b1 = 0;
//	double a2 = 0;
//	double b2 = 0;
//	scanf("%lf/%lf", &a1, &b1);
//	scanf("%lf/%lf", &a2, &b2);
//	Print(a1, a2, b1, b2);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	char c = 0;
//	scanf("%d %c", &n,&c);
//	int m = n;
//	if (n % 2 != 0)
//		m += 1;
//	int i = 0;
//	for (i = 0; i < m/2; i++)
//	{
//		int j = 0;
//		if (i == 0 || i == (m / 2) - 1)
//		{
//			for (j = 0; j < n; j++)
//			{
//				printf("%c", c);
//			}
//		}
//		else
//		{
//			printf("%c", c);
//			for (j = 0; j < n-2; j++)
//			{
//				printf(" ");
//			}
//			printf("%c", c);
//		}
//			printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//char c = 0;
//while (scanf("%c", &c) != EOF)
//{
//    getchar();
//    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//    {
//        printf("Vowel\n");
//    }
//    else
//    {
//        printf("Consonant\n");
//    }
//}
//return 0;
//}


//int main()
//{
//	int a = 10;//向内存申请4个字节的空间，里面存放10
//	int* pa = &a;//创建指针变量pa存放a的地址
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//	return 0;
//}



//int main()
//{
//	int a = 10;//向内存申请4个字节的空间，里面存放10
//	int* pa = &a;//创建指针变量pa存放a的地址
//	printf("%d\n", *pa);
//	*pa = 20;
//	printf("%d\n", *pa);
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	char c = 0;
//	//int:表示pa指针指向的值的类型为int
//	//*:表示pa是指针变量
//	int* pa = &a;
//	//char:表示pc指针指向的值的类型为char
//	//*:表示pc是指针变量
//	char* pc = &c;
//	return 0;
//}



//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}



//struct student
//{
//	//姓名
//	char name[20];
//	//性别
//	char sex;
//	//年龄
//	int age;
//	//身份证号
//	char id[20];
//};
//
//struct Book
//{
//	//成员变量
//	char name[20];
//	int price;
//	char author[20];
//};
//int main()
//{
//	struct student s1 = { "张三",'男',18,"1234567895896" };
//	struct Book b1 = { "C语言程序设计", 55, "谭浩强" };
//	printf("名字: %s 年龄: %d 性别: %s 学号: %s\n", s1.name, s1.age, s1.sex, s1.id);
//	printf("%s %d %s\n", b1.name, b1.price, b1.author);
//	struct Book* pb = &b1;
//	printf("%s %d %s\n", (*pb).name, (*pb).price, (*pb).author);
//	printf("%s %d %s\n", pb->name, pb->price, pb->author); */
//		return 0;
//
//}