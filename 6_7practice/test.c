# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<ctype.h>
#include<string.h>

//
//int check(char* p)
//{
//	int i = 0;
//	for (i = 0; i < 17; i++)
//	{
//			if (!isdigit(p[i]))
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	char str[100][20] = { 0 };
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//			scanf("%s", str[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		char str1[20] = { 0 };
//		strcpy(str1, str[i]);
//		int ret = check(str1);
//		if (ret == 0)
//		{
//			printf("\n%s\n", str[i]);
//		}
//	}
//	return 0;
//
//}
//

//#include<stdio.h>
//int main()
//
//{
//	int a[3][5];
//	int i, j;
//	printf("input:");
//	for (i = 0; i < 3; i++) 
//	{
//		for (j = 0; j < 5; j++) 
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//
//	{
//		for (j = 0; j < 5; j++)
//
//		{
//			printf("%d", a[i][j]);
//		}
//	}
//	return 0;
//
//}


//int Max_Min(int arr[],int n)
//{
//	int i = 0;
//	int max = 0;
//	int min = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (arr[i] > arr[max])
//		{
//			max = i;
//		}
//		if (arr[i] < arr[min])
//		{
//			min = i;
//		}
//	}
//	return arr[max] * arr[min];
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("%d", Max_Min(arr,n));
//	return 0;
//}



void Count(char* p)
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
			printf("%c ", *(p+i));
	}
	printf("\n");
}
int main()
{
	char str[3][5] = { "123","abc","12ab" };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		Count(str+i);
	}
	 
	return 0;
}