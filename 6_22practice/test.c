# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//猜数字游戏
//1.生成一个随机数
//2.猜数字(大，小，对了)
//3.可以反复玩

void menu()
{
	printf("***************************\n");
	printf("*********   1. paly *******\n");
	printf("*********   0.exit  *******\n");
}

void game()
{
	int guess = 0;
	//猜数字游戏逻辑
	//1.生成随机数(1-100)
	int ret = rand()%100+1;
	//2.猜数字
	while (1)
	{
		printf("请猜数字->");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你！猜对了！！\n");
			break;
		}
	}
} 

int main()
{
	int input = 0;
	//设置随机数生成起点
	srand((unsigned int)time(NULL));//拿时间戳作为参数
	do
	{
		//打印菜单
		menu();
		printf("请选择:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//调用游戏函数
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重试\n");
			break;
		}
	} while (input);
	return 0;
}