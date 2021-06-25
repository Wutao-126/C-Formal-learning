# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[101] = { 0 };
	char arr2[101] = { 0 };
	scanf("%s %s", arr1,arr2);
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	int i = 0;
	if (len2 < len1)
	{
		int j = 1;
		for (i = 1; i <= len2; i++)
		{
			arr2[len1 - i] = arr2[len2-j];
			j++;
		}
		for (i = 0; i < len1 - len2; i++)
		{
			arr2[i] = '0';
		}
		len2 = len1;
	}
	i = 1;
	while (i <= len1)
	{
		if (i % 2 == 0)
		{
			if (arr2[len2 - i]-arr1[len1-i] >= 0)
			{
				arr2[len2 - i] =arr2[len2-i]-arr1[len1-i] + '0';
			}
			else
			{
				arr2[len2 - i] = arr2[len2 - i] - arr1[len1 - i] + 10 + '0';
			}
		}
		else
		{
			int tmp = (arr2[len2 - i] + arr1[len1 - i] - 2*'0')%13;
			
			if (tmp < 10)
				arr2[len2 - i] = tmp + '0';
			if (tmp == 10)
				arr2[len2 - i] = 'J';
			if (tmp == 11)
				arr2[len2 - i] = 'Q';
			if (tmp == 12)
				arr2[len2 - i] = 'K';
		}
		i++;
	}
		printf("%s", arr2);
	return 0;
}