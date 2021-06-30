# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int my_strlen1(const char* str)
{
	int count = 0;
	while (*str++ != '\0')
	{
		count++;
	}
	return count;
}

int my_strlen2(const char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
		return 1 + my_strlen2(str+1);
}
int main()
{
	char str[20] = "abcdefgh";
	printf("%d", my_strlen2(str));
	return 0;
}