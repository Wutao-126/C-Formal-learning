#include<stdio.h>


//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int c = a ^ b;
//    int count = 0;
//    while (c)
//    {
//        c &= (c - 1);
//        count++;
//    }
//    printf("%d", count);
//    return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 1;
//	int arr[50] = { 0 };
//	while (a)
//	{
//		if (i % 2 != 0)
//		{
//			arr[i] = a % 2;
//			i++;
//		}
//		else
//		{
//			arr[i] = a % 2;
//			i++;
//		}
//		a /= 2;
//	}
//	int j = 0;
//	for (j = 1; j < i; j+=2)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	for (j = 2; j < i; j += 2)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	a ^= b;
//	b ^= a;
//	a ^= b;
//	printf("a = %d ,b = %d", a, b);
//	return 0;
//}


//ÊäÈë£º
//2 3
//1 2 3
//4 5 6
//Êä³ö£º
//1 4
//2 5
//3 6
//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}