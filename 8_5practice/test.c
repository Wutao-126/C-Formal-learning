#include<stdio.h>
#include<assert.h>

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[] = "abcdef";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}

char* my_strcpy(char* dest, const char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char str1[] = "abcd";
	char str2[10] = "xxxxxxxx";
	char* ret = my_strcpy(str2, str1);
	printf("%s", ret);
	return 0;
}