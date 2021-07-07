# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int FindNum(int** arr, int n, int num)
//{
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i <n ; i++)
//	{
//		for (j = n-1; j >= 0; j--)
//		{
//			if (arr[i][j] > num)
//			{
//				continue;
//			}
//			else if (arr[i][j] < num)
//			{
//				break;
//			}
//			else
//			{
//				return 1;
//			}
//		}
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int** arr = (int**)malloc(sizeof(int)* n);
//	int i = 0;
//
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = (int*)malloc(sizeof(int) * n);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	int num = 0;
//	scanf("%d", &num);
//	int ret = FindNum(arr, n, num);
//
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//
//	else
//	{
//		printf("找不到\n");
//	}
//
//	free(arr);
//	arr = NULL;
//	return 0;
//}


int main()
{
	int arr[2][3] = { {1,2,3,},{4,5,6} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}