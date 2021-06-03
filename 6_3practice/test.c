# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define sum(x,y) ((x)+(y))//定义宏


//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	
//	return 0;
//}



//int main()
//{
//	printf("%d\n", sum(9+10, 2));
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}


//PTA乙级程序运行时间
//int fun(int x, int y)
//{
//	if ((y - x) % 100 >= 50)
//	{
//		return ((y - x) / 100) + 1;
//	}
//	else
//		return (y - x) / 100;
//}
//int main()
//{
//	int c1 = 0;
//	int c2 = 0;
//	scanf("%d%d", &c1, &c2);
//	int ret = fun(c1, c2);
//	int h = ret / 3600;
//	int m = ret % 3600 / 60;
//	int s = ret - h*3600 - m*60;
//	printf("%02d:%02d:%02d", h, m, s);
//	return 0;
//}



//PTA乙级打印沙漏

int first_count(int x)
{
	int i = 0;
	int ret = 0;
	for (i = 3;; i += 2)
	{
		x -= i;
		if (x < 0)
		{
			return i - 2;
		}
	}

}

int Print(int n, char ch)
{
	int i = 0;
	int count = 0;
	for (i = n; i > 0; i -= 2)
	{
		int j = 0;
		for (j = 0; j < (n - i) / 2; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
		count += i;
	}
	for (i = 3; i <= n; i += 2)
	{
		int j = 0;
		for (j = (n - i) / 2; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	return 2 * count - 1;
}

int main()
{
	int a = 0;
	char ch = 0;
	int n = 0;
	scanf("%d %c", &a, &ch);
	if (a % 2 == 0)
	{
		n = first_count((a - 1) / 2);
	}
	else
	{
		n = first_count(a / 2);
	}
	int count = Print(n, ch);
		printf("%d", a - count);
	return 0;
}
