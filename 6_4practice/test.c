# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#define MAX(X,Y) (X)>(Y)?(X):(Y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a++, b++);
//	printf("%d\n", max);
//	printf("%d\n", a );
//	printf("%d\n", b );
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//typedef struct peoinfo
//{
//	char name[6];
//	char date[20];
//}peopinfo;
//
//com_char(const void* str1, const void* str2)
//{
//	return strcmp(((peopinfo*)str1)->date, ((peopinfo*)str2)->date);
//}
//
//int test(peopinfo* ps, int n)
//{
//	int i = 0;
//	int count = n;
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp((ps+i)->date, "1814/09/06") < 0||strcmp((ps+i)->date ,"2014/09/06")>0)
//			count--;
//	}
//	return count;
//}
//
//int test2(peopinfo* ps, int n)
//{
//	int count = n;
//	int i = 0;
//	for (i = n - 1; i >= 0; i--)
//	{
//		if (strcmp((ps + i)->date, "2014/09/06") > 0)
//		{
//			count--;
//		}
//	}
//	return count;
//}
//int test3(peopinfo* ps, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (strcmp((ps + i)->date, "1814/09/06") < 0)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n);
//	peopinfo* p = (peopinfo*)malloc(n*sizeof(peopinfo));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", p[i].name);
//		scanf("%s", p[i].date);
//	}
//	qsort(p , n, sizeof(p[0]), com_char);
//	int ret = test(p, n);
//	int m = test2(p, n);
//	int j = test3(p, n);
//	if (ret == 0)
//	{
//		return 0;
//	}
//	printf("%d %s %s", ret, p[j].name, p[m-1].name);
//	free(p);
//	p = NULL;
//	return 0;
//}


//#include <stdio.h>
//int global = 2019;//全局变量
//int main()
//{
//    int global = 2020;//局部变量
//    printf("global = %d\n", global);
//    return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
//void my_cmp(const char* str1, const char* str2, char*str)
//{
//	
//	while (*str1)
//	{
//		if (*str1 != *str2)
//		{
//			*str = *str1;
//			str++;
//			str1++;
//		}
//		else
//		{
//			str1++;
//			str2++;
//		}
//	}
//}
//
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	char str[10] = { 0 };
//	gets(arr1);
//	gets(arr2);
//    my_cmp(arr1, arr2,str);
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (islower(str[i]))
//		{
//			str[i] = toupper(str[i]);
//		}
//	}
//	int len = strlen(str);
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		for (j = 0;j<i; j++)
//		{
//			if (str[i] == str[j])
//				break;
//		}
//		if (j == i)
//		{
//			printf("%c", str[i]);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char* ptr;
//	char arr[] = "12345678";
//	ptr = arr;
//	ptr += 5;
//	printf("%s", ptr);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//    float w = 0;
//    float h = 0;
//    scanf("%f%f", &w, &h);
//    float BMI = w / (h / 100) / (h / 100);
//    printf("%.2f", BMI);
//    return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    scanf("%f%f%f", &a, &b, &c);
//    float p = (a + b + c) / 2;
//    printf("circumference=%.2f area=%.2f", a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//    return 0;
//}



//#define PI 3.1415926
//#include<stdio.h>
//int main()
//{
//    float r = 0;
//    scanf("%f", &r);
//    float s = 4 * PI * r * r * r/3;
//    printf("%.2f", s);
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//
//    char c1, c2;
//    c1 = getchar();
//    char c = getchar();
//    c2 = getchar();
//     
//    printf("%c\n%c", c1 + 32, c2 + 32);
//
//    return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double n = 0;
//    double m = 0;
//    scanf("%lf\n%lf", &n, &m);
//    printf("%.0lf\n%.0lf", pow(2, n), pow(2, m));
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    scanf("%d%d%d", &n, &h, &m);
//    int count = n-m/h;
//    if (m % h != 0&&count>0)
//    {
//        count--;
//    }
//    printf("%d", count);
//        return 0;
//}


#include<stdio.h>
int main()
{
	printf("Name Age Gender\n");
	printf("---------------------\n");
	printf("Jack 18  man");
	return 0;
}