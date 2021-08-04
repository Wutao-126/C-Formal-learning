#include<stdio.h>


//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s++)
//	{
//		count++;
//	}
//	return count;
//}
//
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//
//int main()
//{
//	char str[] = "abcdefg";
//	printf("%d\n", my_strlen(str));
//	return 0;
//}

#include<assert.h>
#include<stdio.h>

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

//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//}
//
//int main()
//{
//	char str1[] = "abc";
//	char str2[20] = { 0 };
//	my_strcpy(str2, str1);
//	printf("%s", str2);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	return 0;
//}



#include <stdio.h>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
    int* p = arr; //指针存放数组首元素的地址
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
    }
    return 0;
}
