#include<stdio.h>

//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (j == 1 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("%d ",arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



int main()
{
	int arr[4] = { 0 }; //默认4个人都不是凶手

	int i;
	for (i = 0; i < 4; i++) //遍历假设四个人中的某个人是凶手
	{
		arr[i] = 1; //假设某个人是凶手
		if ((arr[0] != 1) +
			(arr[2] == 1) +
			(arr[3] == 1) +
			(arr[3] != 1) == 3)
		{
			break; //满足就代表就是你了！
		}
		arr[i] = 0; //不满足还他清白
	}

	putchar('A' + i); //打印凶手的编号。我们的编号是0 1 2 3，加上'A'后变成A B C D。
	return 0;
}