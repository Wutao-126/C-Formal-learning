#include"game.h"


void menu()
{
	printf("*****************************\n");
	printf("************1.play***********\n");
	printf("************0.exit***********\n");
	printf("*****************************\n");

}

void game()
{
	char mine[ROWS][COLS];//存放雷的信息
	char show[ROWS][COLS];//存放排查出的雷的信息
	
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
    //DisplayBoard(mine, ROW, COL);

	//排雷
	FindMine(mine, show, ROW, COL);
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
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
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}







//#include <stdio.h>
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4 };
//	int arr2[3][4] = { {1,2},{4,5} };
//	int arr3[][4] = { {2,3},{4,5} };
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[3][4];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//这样对吗？
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 3,1,7,5,8,9,0,2,4,6 };
//	bubble_sort(arr);//是否可以正常排序？
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	//输出结果
//	return 0;
//}































//#include<stdio.h>
//
////121. 买卖股票的最佳时机
////给定一个数组 prices ，它的第 i 个元素 prices[i] 表示一支给定股票第 i 天的价格。
////你只能选择 某一天 买入这只股票，并选择在 未来的某一个不同的日子 卖出该股票。设计一个算法来计算你所能获取的最大利润。
////返回你可以从这笔交易中获取的最大利润。如果你不能获取任何利润，返回 0 。
//
////输入：[7,1,5,3,6,4]
////输出：5
////解释：在第 2 天（股票价格 = 1）的时候买入，在第 5 天（股票价格 = 6）的时候卖出，最大利润 = 6 - 1 = 5 。
////注意利润不能是 7 - 1 = 6, 因为卖出价格需要大于买入价格；同时，你不能在买入前卖出股票。
//
////思路：用第i个位置的价格减去前i-1个位置中最小的价格
////      
//
//int maxProfit(int* prices, int pricesSize) {
//    int price = 0;//利益
//    int min = prices[0];//前i-1个股票中最小的价格，初始化为第一个
//    int i = 0;
//    for (i = 1; i < pricesSize; i++)
//    {
//        if (min > prices[i - 1])//i每++一次就判断一下是否比前面的价格低，这样就可以找出前i-1个中的最低价格
//        {
//            min = prices[i - 1];
//        }
//        if (price < prices[i] - min)//如果当前位置的价格减去前面最低的价格大于price就将price置为它
//        {
//            price = prices[i] - min;
//        }
//    }
//    return price == 0 ? 0 : price;//如果price为0就返回0;
//}
//
//int main()
//{
//    int arr[] = { 7,1,5,3,6,4 };
//    maxProfit(arr, 6);
//    return 0;
//}