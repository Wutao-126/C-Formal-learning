#include<stdio.h>


//int main()
//{
//	int a = 10;
//	if (a = 10)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 1;
//	//int c = a && ++b;
//	//printf("a = %d, b = %d, c = %d\n", a, b, c);
//	int d = ++a || ++b;
//	printf("a = %d, b = %d, d = %d\n ", a, b, d);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//i = a++||++b||d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	return 0;
//}
//程序输出的结果是什么？



//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a > 20 ? a : b;
//	printf("%d\n", c);
//	return 0;
//}

//#include<string.h>
//int lengthOfLongestSubstring(char* s) {
//    int len = strlen(s);
//    char* start = (char*)malloc(sizeof(char) * len);
//    int i = 0;
//    while (*s)
//    {
//        *(start + i) = *s;
//        s++;
//        if (strchr(start, *s) != NULL)
//        {
//            break;
//        }
//        i++;
//    }
//    return s - start;
//}
//
//int main()
//{
//    char str[]="abcabcbb";
//    int ret = lengthOfLongestSubstring(str);
//    return 0;
//}


//
//int main()
//{
//	
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int k = 1;
//	for (i = 0; i <= n/2; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n/2 - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j < k; j++)
//		{
//			printf("* ");
//		}
//		k += 2;
//		printf("\n");
//		printf("\n");
//	}
//	k = n - 2;
//	for (i = n / 2; i > 0; i--)
//	{
//		int j = 0;
//		for (j = 0; j <= n / 2 - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j < k; j++)
//		{
//			printf("* ");
//		}
//		k -= 2;
//		printf("\n");
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 20;
//	int count = 20;
//	while (n>1)
//	{
//		int flag = n % 2;
//		count += n / 2;
//		n /= 2;
//		n += flag;
//	}
//	printf("%d", count);
//	return 0;
//}





//283. 移动零

//给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
//示例:

//输入: [0, 1, 0, 3, 12]
//输出 : [1, 3, 12, 0, 0]

//思路:设置快慢指针，快指针遍历数组，慢指针用作数组下标，
//     如果快指针访问到的值不为0，就将它存到慢指针中，
//     这样快指针将数组遍历完后数组剩下的空间都应该放0，且不为0元素的顺序不变

void moveZeroes(int* nums, int numsSize) {
    int i = 0;
    int j = 0;
    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[j++] = nums[i];
        }
    }
    while (j < numsSize)//将数组剩下的空间全部放0
    {
        nums[j] = 0;
        j++;
    }
}