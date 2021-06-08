# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//#include<stdio.h>
//#define SUM(X,Y) X+Y
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = SUM(a, b);
//	printf("%d", c);
//	return 0;
//}

//#include<stdio.h>
//int fun(int x)
//{
//    if (x < 0)
//    {
//        return 1;
//    }
//    if (x == 0)
//    {
//        return 0;
//    }
//    if (x > 0)
//    {
//        return -1;
//    }
//}
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    printf("%d", fun(x));
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int i = 0;
//
//    for (i = 10000; i < 100000; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 4; j > 0; j--)
//        {
//            sum += i / (int)pow(10, j) * (i % (int)pow(10, j));
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//#include<stdlib.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int x=0, y=0;
//	int max = 0;
//	int m = 0;
//	int* p = (int*)calloc(n , sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%d", &x, &y);
//		p[x-1] += y;
//		if ( p[x-1] >= max)
//		{
//			max = p[x-1];
//			m = x;
//		}
//	}
//	printf("%d %d", m, max);
//	free(p);
//	p = NULL;
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[40] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	char ch[100] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//	scanf("%s", ch);
//	int i = 0;
//	while (ch[i] != '0'||ch[i]!='\0')
//	{
//		if (ch[i] == 'A')
//			count1++;
//		else
//			count2++;
//		i++;
//	}
//	
//	if (count1 > count2)
//		printf("A");
//	else if (count1 < count2)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        if (n >= 140)
//            printf("Genius");
//    }
//    return 0;
//}


#include<stdio.h>
int main()
{
    int y = 0;
    int s = 0;
    int w = 0;
    while (scanf("%d%d%d", &y, &s, &w) != EOF)
    {
        if (y > s)
        {
            if (y > w)
                printf("%d\n", y);
            else
                printf("%d\n", w);
        }
         else if (y > w)
        {
            if (y > s)
                printf("%d\n", y);
            else
                printf("%d\n", s);
        }
        else if (s > w)
        {
            if (s > y)
                printf("%d\n", s);
            else
                printf("%d\n", y);
        }
        else
        {
            if (w > y)
                printf("%d\n", w);
            else
                printf("%d\n", y);
        }
    }
    return 0;
}