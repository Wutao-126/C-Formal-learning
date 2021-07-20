#include<stdio.h>
#define MIN(x,y) (x)<(y)?(x):(y)

//union X{
//	int x;
//	char y[4];
//}a;
//
//int main()
//{
//	printf("%d", MIN(4, 4));
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1);
//	int* p3 = (int*)(a + 1);
//	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);
//	return 0;
//}
//1B FEA9

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* arr = (int*)malloc(sizeof(int) * n);
//	int max = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = k; j <= i; j++)
//		{
//			sum += arr[j];
//			if (sum > max)
//			{
//				max = sum;
//			}
//		}
//		if (i == n)
//		{
//			k++;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	/*char* str[3] = { "stra","strb","strc" };
//	char* p = str[0];
//	int i = 0;
//	while (i < 3)
//	{
//		printf("%s ", p++);
//		i++;
//	} */
//
//	int x[] = { 1,2,3,4,5,6 }, * p = x;
//	p += 2;
//	printf("%d", *p++);
//	return 0;
//}


//#include<stdio.h>
//char* myString()
//{
//	char buffer[6] = { 0 };
//	char* s = "Hello World!";
//	for (int i = 0; i < sizeof(buffer) - 1; i++)
//	{
//		buffer[i] = *(s + i);
//	} 
//	return buffer;
//
//} 
//int main()
//	{
//		printf("%s\n", myString());
//		return 0;
//	}



//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = (char)(-1 - i);
//	} 
//	printf("%d\n", strlen(a));
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	int arr[128] = { 0 };
	char str[100] = { 0 };
	scanf("%s", str);
	int i = 0;
	int len = strlen(str);
	for (i = 0; i < len ; i++)
	{
		arr[str[i]]++;
	}
	i = 0;
	while (str[i])
	{
		if (arr[str[i]] == 1)
		{
			printf("%c", str[i]);
			break;
		}
		i++;
	}
	return 0;
}