# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>

//
//int check(char* str)
//{
//	while (*str)
//	{
//		if (*str == '+')
//			return 1;
//		str++;
//	}
//	return 0;
//}
//
//void Print(char* str, char* str2, int ret)
//{
//	int len = strlen(str);
//	int i = 0;
//	while (*str2)
//	{
//		if (ret == 1)
//		{
//			if (isupper(*str2))
//			{
//				str2++;
//				continue;
//			}
//		}
//		for (i = 0; i < len; i++)
//		{
//			if (toupper(*str2) == *(str + i))
//				break;
//		}
//		if (i == len)
//		{
//			printf("%c", *str2);
//		}
//		str2++;
//	}
//}
//int main()
//{
//	char str1[100005] = { 0 };
//	char str2[100005] = { 0 };
//	gets(str1);
//	gets(str2);
//	int ret = check(str1);
//	Print(str1, str2, ret);
//	return 0;
//}

#include<stdio.h>
int main()
{
    printf("printf(\"Hello world!\\n\");\n");
    printf("cout << \"Hello world!\" << endl;");
        return 0;
}