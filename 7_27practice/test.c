#include"game.h"


void menu()
{
	printf("******************************\n");
	printf("***********1.play*************\n");
	printf("***********0.exit*************\n");

}

void game()
{
	//��������
	char board[ROW][COL];
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);
	//����
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

int main()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������\n");
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



//119. ������� II
//����һ���Ǹ����� rowIndex�����ء�������ǡ��ĵ� rowIndex �С�
//�ڡ�������ǡ��У�ÿ�����������Ϸ������Ϸ������ĺ͡�
//����: rowIndex = 3
//���: [1, 3, 3, 1]



//˼·��ֻʹ��һά���飬�Ӻ���ǰ����
//
//     1.����һ��һά���飬��СΪrowIndex+1,��Ϊֻ����㵽��rowIndex��(��0��ʼ����)���Ҹ���Ԫ�ظ���ΪrowIndex+1
//            1
//           1 1
//          1 2 1
//         1 3 3 1
//        1 4 6 4 1

//     2.����ͼ��ʾ��j=0��j=iʱnum[j]��Ϊ1
//     3.�����ǿ��Է���������λ�ô���ֵnum[j] = num[j]+num[j-1](����һ�и�λ�õ�ֵ������һ�и�λ��ǰһ��ֵ)
//     �����3�е�����Ԫ�أ�num[2] = num[2]+num[1](3 = 1+2)

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