#include"game.h"


void menu()
{
	printf("******************************\n");
	printf("***********1.play*************\n");
	printf("***********0.exit*************\n");

}

void game()
{
	//棋盘数组
	char board[ROW][COL];
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);
	//下棋
	char ret = 0;
	while (1)
	{
		PlayerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		PrintBoard(board, ROW, COL);
		IsWin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("请选择>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重试\n");
			break;
		}
	} while (input);
}






















#include<stdio.h>

//void BubbleSort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//void Swap(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}



//119. 杨辉三角 II
//给定一个非负索引 rowIndex，返回「杨辉三角」的第 rowIndex 行。
//在「杨辉三角」中，每个数是它左上方和右上方的数的和。
//输入: rowIndex = 3
//输出: [1, 3, 3, 1]



//思路：只使用一维数组，从后往前计算
//
//     1.创建一个一维数组，大小为rowIndex+1,因为只会计算到第rowIndex行(从0开始计数)，且该行元素个数为rowIndex+1
//            1
//           1 1
//          1 2 1
//         1 3 3 1
//        1 4 6 4 1

//     2.如上图所示当j=0或j=i时num[j]处为1
//     3.则我们可以发现在其他位置处的值num[j] = num[j]+num[j-1](即上一行该位置的值加上上一行该位置前一个值)
//     例如第3行第三个元素：num[2] = num[2]+num[1](3 = 1+2)

//
//int* getRow(int rowIndex, int* returnSize) {
//    *returnSize = rowIndex + 1;
//    int* num = (int*)malloc((rowIndex + 1) * sizeof(int));
//    for (int i = 0; i <= rowIndex; i++)
//        for (int j = i; j >= 0; j--)
//        {
//            if (j == 0 || j == i)
//                num[j] = 1;
//            else
//                num[j] = num[j] + num[j - 1];
//        }
//    return num;
//}
//int main()
//{
//    int rowIndex = 3;
//    int returnSize = 0;
//    getRow(rowIndex, &returnSize);
//    return 0;
//}