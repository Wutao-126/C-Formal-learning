# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char str[10005] = { 0 };
	scanf("%s", str);
	int arr[117] = { 0 };
	int i = 0;
	int max = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'P' || str[i] == 'A' || str[i] == 'T' || str[i] == 'e' || str[i] == 's' || str[i] == 't')
		{
			int tmp = str[i];
			arr[tmp]++;
			if (arr[tmp] > max)
			{
				max = arr[tmp];
			}
		}
	}
	for (i = 0; i < max; i++)
	{
		if (arr['P'] > 0)
		{
			printf("P");
			arr['P']--;
		}
		if (arr['A'] > 0)
		{
			printf("A");
			arr['A']--;
		}
		if (arr['T'] > 0)
		{
			printf("T");
			arr['T']--;
		}
		if (arr['e'] > 0)
		{
			printf("e");
			arr['e']--;
		}
		if (arr['s'] > 0)
		{
			printf("s");
			arr['s']--;
		}
		if (arr['t'] > 0)
		{
			printf("t");
			arr['t']--;
		}
	}
	return 0;
}