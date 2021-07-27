#include"game.h"

void InitBoard(char board[][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void PrintBoard(char board[][COL], int row, int col)
{

	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void PlayerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走>\n");
	printf("请输入坐标>");
	scanf("%d%d", &x, &y);
	while (1)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
				printf("玩家走>\n");
				printf("请输入坐标>");
				scanf("%d%d", &x, &y);
			}
		}
		else
		{
			printf("输入错误\n");
		}
	}
}


void ComputerMove(char board[][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


char IsWin(char board[][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		
		int countp = 0;
		int countc = 0;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				break;
			if (board[i][j] == '*')
				countp++;
			if (board[i][j] == '#')
				countc++;
			if (countp == 3)
				return '*';
			if (countc == 3)
				return '#';
		}

	}
	for (j = 0; j < col; j++)
	{
		int countp = 0;
		int countc = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][j] == ' ')
				break;
			if (board[i][j] == '*')
				countp++;
			if (board[i][j] == '#')
				countc++;
			if (countp == 3)
				return '*';
			if (countc == 3)
				return '#';
		}
	}
	int countp = 0;
	int countc = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][i] == '*')
			countp++;
		if (board[i][i] == '#')
			countc++;
		if (countp == 3)
			return '*';
		if (countc == 3)
			return '#';
	}
    countp = 0;
	countc = 0;
	for (i = 0,j = row-1; i < row&&j >= 0; i++,j--)
	{
		if (board[i][j] == '*')
			countp++;
		if (board[i][j] == '#')
			countc++;
		if (countp == 3)
			return '*';
		if (countc == 3)
			return '#';
	}
	for (i = 0; i < row ; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'c';
			}
		}
	}
	return 'a';
}