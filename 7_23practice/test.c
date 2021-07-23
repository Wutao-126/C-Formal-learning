#include<stdio.h>

//void test(int** arr)
//{
//	printf("%d", **(arr + 1));
//}
//
//int main()
//{
//	int arr[2][5] = { {1,2},{3,4} };
//	test(arr);
//	return 0;
//}

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n%10);
//}

//void BinPrint(int n,int x)
//{
//	if (n >= x)
//	{
//		BinPrint(n / x,x);
//	}
//	printf("%d", n%x);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//Print(n);
//	BinPrint(n, 2);
//	return 0;
//}

//int my_strlen(const char* str)
//{
//	if (*str)
//	{
//		return my_strlen(str+1) + 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr[10] = "abcdef";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int Fac(int n)
//{
//	if (n>1)
//	{
//		return Fac(n - 1) * n;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fac(n));
//	return 0;
//}

//int Fab(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fab(n - 1) + Fab(n - 2);
//}
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//	return 0;
//}

//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//int Fac1(int n)
//{
//	if (n > 1)
//	{
//		return Fac1(n - 1) * n;
//	}
//	return 1;
//}
//
//int Fac2(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = n; i >= 1; i--)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac1(n));
//	printf("%d\n", Fac2(n));
//	return 0;
//}


//#include<assert.h>
//int my_strlen1(const char* str)
//{
//	assert(str);
//	if (*str)
//	{
//		return my_strlen1(str + 1) + 1;
//	}
//	return 0;
//}
//
//int my_strlen2(const char* str)
//{
//	assert(str);
//	int len = 0;
//	while (*str)
//	{
//		len++;
//		str++;
//	}
//	return len;
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	printf("%d\n", my_strlen1(str));
//	printf("%d\n", my_strlen2(str));
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	return n % 10;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}


//int fun(int n, int k)
//{
//	if (k)
//	{
//		return fun(n, k - 1) * n;
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d", fun(n, k));
//	return 0;
//}

//int Fib1(int n)
//{
//	if (n > 2)
//	{
//		return Fib1(n - 1) + Fib1(n - 2);
//	}
//	return 1;
//}
//
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fib1(n));
//	printf("%d\n", Fib2(n));
//	return 0;
//}


char* reverse_string(char* str)
{
		int len = strlen(str);
		char tmp = *str;
		*str = *(str + len - 1);
		*(str + len - 1) = '\0';
		if (strlen(str + 1) > 2)
		{
			reverse_string(str + 1);
		}
		*(str + len - 1) = tmp;
		return str;
}
int main()
{
	char arr[] = "abcdef";
	printf("ÄæĞòÇ°£º%s\n", arr);
	printf("ÄæĞòºó£º%s\n", reverse_string(arr));
	return 0;
}