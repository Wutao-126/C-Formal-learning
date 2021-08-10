#include<string.h>
#include<stdio.h>

#include<assert.h>
 
//char* LeftRevolve(char* str, int n)
//{
//	assert(str);
//	while (n)
//	{
//		char tmp = *str;
//		int i = 0;
//		while (*(str + i))
//		{
//			*(str + i) = *(str+i + 1);
//			i++;
//		}
//		*(str + i - 1) = tmp;
//		n--;
//	}
//	return str;
//}
//int main()
//{
//	char str[] = "ABCD";
//	int n = 0;
//	scanf("%d", &n);
//	char*ret = LeftRevolve(str, n);
//	printf("%s", ret);
//	return 0;
//}

#include<string.h>
#include<stdio.h>

#include<assert.h>
int is_Revolve(char* str1, char* str2)
{
	assert(str1 && str2);
	int len = strlen(str2);
	strncat(str2, str2,len);
	if (strstr(str2, str1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char str1[10] = { 0 };
	char str2[20] = { 0 };
	gets(str1);
	gets(str2);
	int ret = is_Revolve(str1, str2);
	printf("%d", ret);
	return 0;
}