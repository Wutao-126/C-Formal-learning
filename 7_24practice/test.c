#include<stdio.h>


//int main()
//{
//	/*unsigned char a = 0xA5;
//	unsigned char b = ~a >> 4 + 1;
//	printf("%d\n", b);*/
//
//	const int i = 0;
//	int* j = (int*)&i;
//	*j = 1;
//	printf("%d,%d", i, *j);
//	return 0;
//}


//char Find_First_Repeat(char* str)
//{
//	int arr[128] = { 0 };
//	while (*str++)
//	{
//		arr[*str]++;
//		if (arr[*str] == 2)
//		{
//			return *str;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char str[100] = { 0 };
//	scanf("%s", str);
//	char ret = Find_First_Repeat(str);
//	printf("%c", ret);
//	return 0;
//}



//#include <stdio.h>
//void Swap1(int x, int y)
//{
//    int tmp = 0;
//    tmp = x;
//    x = y;
//    y = tmp;
//}
//
//
//void Swap2(int* px, int* py)
//{
//    int tmp = 0;
//    tmp = *px;
//    *px = *py;
//    *py = tmp;
//}
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("交换前：a = %d b = %d\n", a, b);
//    Swap1(a, b);
//    
//    printf("交换后：a = %d b = %d\n", a, b);
//
//    printf("交换前：a = %d b = %d\n", a, b);
//    Swap2(&a, &b);
//    
//    printf("交换后：a = %d b = %d\n", a, b);
//}
//
//
//
//
//
//
//#include <stdio.h>
//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//
//int main()
//{
//    int num = 1234;
//    print(num);
//    return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", fib(n));
	return 0;
}

