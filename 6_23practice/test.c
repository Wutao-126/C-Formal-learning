//# define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("****************************\n");
//	printf("********** 1.paly **********\n");
//	printf("********** 0.exit **********\n");
//	printf("****************************\n");
//}
//
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("����������->");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶��ˣ���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//
//int* singleNumber(int* nums, int numsSize, int* returnSize) {
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < numsSize; ++i)
//	{
//		ret ^= nums[i];
//	}
//	int m = 0;
//	while (m < 32)
//	{
//		if (ret & (1 << m))
//			break;
//		else
//			++m;
//	}
//	int x1 = 0, x2 = 0;
//	for (i = 0; i < numsSize; ++i)
//	{
//		if (nums[i] & (1 << m))
//		{
//			x1 ^= nums[i];
//		}
//		else
//		{
//			x2 ^= nums[i];
//		}
//
//	}
//	int* retArr = (int*)malloc(sizeof(int) * 2);
//	retArr[0] = x1;
//	retArr[1] = x2;
//	*returnSize = 2;
//	return retArr;
//}