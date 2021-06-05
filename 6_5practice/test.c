# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	char arr[] = "abcdefg";
//	memset(arr+3, 'x', 3);
//	printf("%s", arr);
//	return 0;
//}


//int main()
//{
//	//char ch = 0;
//	int ch = 0;
//	int a = 0;
//	scanf("%d%d", &a, &ch);
//	printf("%d %d", a, ch);
//	return 0;
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//void bubble_sort(long int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				long int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int get_count(long int* arr, int n, long int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] * m >= arr[n - 1])
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	long int m = 0;
//	scanf("%d%ld", &n, &m);
//	long int* p = (long int*)malloc(n * sizeof(long int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%ld", (p+i));
//	}
//	bubble_sort(p,n);
//	int ret = get_count(p, n,m);
//	printf("%d", ret);
//	free(p);
//	p = NULL;
//	return 0;
//}



//#include<stdio.h>
//#include<stdlib.h>
//
//int my_cmp(const void* arr1, const void* arr2)
//{
//	return *(long long*)arr1 - *(long long*)arr2;
//}
//int get_count(long long* arr, int n, long long m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] * m >= arr[n - 1])
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	long long m = 0;
//	scanf("%d%lld", &n, &m);
//	long long arr[100000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lld", &arr[i]);
//	}
//	qsort(arr, n, sizeof(arr[0]), my_cmp);
//	int ret = get_count(arr, n, m);
//	printf("%d", ret);
//	return 0;
//}


//
//#include<stdio.h>
//#include<stdlib.h>
//
//int my_cmp(const void* a, const void* b)
//{
//	return *(long int*)a - *(long int*)b;
//}
//int get_count(long int* arr, int n, long int m)
//{
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = i + sum; j < n; j++)
//		{
//			if (arr[i] * m >= arr[j])
//			{
//				count++;
//
//				if (count > sum)
//				{
//					sum = count;
//				}
//			}
//			else
//				break;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int n = 0;
//	long int m = 0;
//	scanf("%d%ld", &n, &m);
//	long int* p = (long int*)malloc(n * sizeof(long int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%ld", (p+i));
//	}
//	qsort(p, n, sizeof(p[0]), my_cmp);
//	int ret = get_count(p, n,m);
//	printf("%d", ret);
//	free(p);
//	p = NULL;
//	return 0;
//}



//#include<stdio.h>
//
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", max(a, b));
//	return 0;
//}


//int main()
//{
//	char str[] = "hello world!";
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}


//代码1
//#include <stdio.h>
//void test()
//{
//    int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}


//#include <stdio.h>
//void test()
//{
//    //static修饰局部变量
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        test();
//    }
//    return 0;
//}


//int main()
//{
//	int *p1,*p2,m=5,n;
//	char define;
//    p1=&m;p2=p1;
//	return 0;
//}

enum string {
    x1,
    x2,
    x3 = 10,
    x4,
    x5,
} x;
int main()
{
    printf("%d", x);
    return 0;
}