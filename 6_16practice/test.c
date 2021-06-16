# define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	 if (a < c)
//	{
//		 int tmp = a;
//		 a = c;
//		 c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 3;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//		i += 3;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	while (n % m)
//	{
//		int r = n % m;
//		n = m;
//		m = r;
//	}
//	printf("%d", m);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1000;
//	while (i++ <= 2000)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//}



//#include<stdio.h>
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int n = 0;
//    scanf("%d:%d%d", &h, &m, &n);
//    m += n % 60;
//    h += n / 60;
//    if (m >= 60)
//    {
//        h += m/60;
//        m %= 60;
//    }
//    
//    if (h >= 24)
//    {
//        h %= 24;
//    }
//    
//
//    printf("%02d:%02d", h, m);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = n / 12 * 4 + 2;
//    printf("%d", i);
//    return 0;
//}


//#include<stdio.h>
//void fun(int n)
//{
//    if (n)
//    {
//        fun(n / 10);
//        if (n % 2 == 0)
//            printf("0");
//        else
//            printf("1");
//        
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    fun(n);
//    return 0;
//}



#include<stdio.h>
#include<stdlib.h>

void cmp_int(void const* a, void const* b)
{
	return *(int*)a - *(int*)b;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int* arr1 = (int*)malloc(4 * n);
	if (arr1 == NULL)
	{
		return 0;
	}
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	qsort(arr1, n, 4, cmp_int);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d ", arr1[i]);
		}
		else
		{
			if (arr1[i] != arr1[i - 1])
			{
				printf("%d ", arr1[i]);
			}
		}
	}
	free(arr1);
	arr1 = NULL;
	return 0;
}