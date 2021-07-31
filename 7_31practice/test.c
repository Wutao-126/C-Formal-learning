#include<stdio.h>


//int func()
//{
//	int i, j, k = 0;
//	for (i = 0, j = -1; j = 0; i++, j++) {
//		k++;
//	} 
//	return k;
//} 
//int main()
//{
//	printf("%d\n", (func()));
//}



//int main()
//{
//	char str1[20] = { 0 };
//	char str2[20] = { 0 };
//	char str3[20] = { 0 };
//	gets(str1);
//	gets(str2);
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	int arr[128] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len2; i++)
//	{
//		arr[str2[i]]++;
//	}
//	for (i = 0; i < len1; i++)
//	{
//		if (arr[str1[i]])
//		{
//			continue;
//		}
//		
//		str3[j++] = str1[i];
//	}
//	printf("%s", str3);
//	return 0;
//}


//void Print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret = ret * 10 + n;
//		sum +=ret;
//	}
//	printf("%d",sum );
//	return 0;
//}

#include<stdlib.h>
char* convertToBase7(int num) {
    char str[100] = { 0 };
    int i = 0;
    while (num)
    {
        if (num < 0)
        {
            *(str + i) = '-';
            num =- num;
            i++;
        }
        *(str + i) = num % 7+'0';
        i++;
        num /= 7;
    }
    return str;
}


int main()
{
    int num = -7;
    printf("%s", convertToBase7(num));
    return 0;
}