# define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//
//struct S
//{
//	char id[20];
//	int a;
//	int b;
//};
//int main()
//{
//	struct S s[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%d%d", &s[i].id, &s[i].a, &s[i].b);
//	}
//	int m = 0;
//	int arr[100] = { 0 };
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < m; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i] == s[j].a)
//			{
//				printf("%s %d\n", s[j].id, s[j].b);
//				break;
//			}
//		}
//
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		printf("%d ", a);
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[1005] = { 0 };
	int arr[122] = { 0 };
	gets(str);
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (isalpha(str[i]))
		{
			if (isupper(str[i]))
			{
				str[i] = tolower(str[i]);
			}
			int tmp = str[i];
			arr[tmp]++;
		}
	}
	int max = 0;
	for (i = 97; i < 122; i++)
	{
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}
	printf("%c %d", max, arr[max]);
	return 0;
}