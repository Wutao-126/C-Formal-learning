# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//��������Ϸ
//1.����һ�������
//2.������(��С������)
//3.���Է�����

void menu()
{
	printf("***************************\n");
	printf("*********   1. paly *******\n");
	printf("*********   0.exit  *******\n");
}

void game()
{
	int guess = 0;
	//��������Ϸ�߼�
	//1.���������(1-100)
	int ret = rand()%100+1;
	//2.������
	while (1)
	{
		printf("�������->");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣡�¶��ˣ���\n");
			break;
		}
	}
} 

int main()
{
	int input = 0;
	//����������������
	srand((unsigned int)time(NULL));//��ʱ�����Ϊ����
	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//������Ϸ����
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������\n");
			break;
		}
	} while (input);
	return 0;
}