#include<stdio.h>


//int main(void)
//{
//	int a = 2, * p1, ** p2;
//	p2 = &p1;
//	p1 = &a;
//	a++;
//	printf("%d,%d,%d\n", a, *p1, **p2);
//	return 0;
//}

//int main()
//{
//	int k, j, s;
//	for (k = 2; k < 6; k++, k++)
//	{
//		s = 1;
//		for (j = k; j < 6; j++)
//			s += j;
//	} 
//	printf("%d\n", s);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	while (n)
//	{
//		arr[i] = n % 10;
//		i++;
//		n /= 10;
//	}
//	int left = 0;
//	int right = i - 1;
//	while (left <= right)
//	{
//		if (arr[left] != arr[right])
//		{
//			printf("不是回文数\n");
//			return 0;
//		}
//		left++;
//		right--;
//	}
//	printf("是回文数\n");
//	return 0;
//}




//168. Excel表列名称
//给你一个整数 columnNumber ，返回它在 Excel 表中相对应的列名称

//A -> 1
//B -> 2
//C -> 3
//...
//Z -> 26
//AA -> 27
//AB -> 28
//...


//输入：columnNumber = 1
//输出："A"



//思路:很显然这道题的本质其实是26进制转换如果，像其他进制转换那样%n，再/n，这里就错了
//     因为比如在26时，%26得到的是0，而正确答案应该应该是26，会包含进制位26
//     所以这里在每次计算时先减1，然后再%26，转换成字符时就加65('A'),而不是加64
//     因为我们是从后往前计算的，所以最后还需将字符串逆序
//



//void reverse(char* str)
//{
//    int len = strlen(str);
//    int left = 0;
//    int right = len - 1;
//    while (left < right)
//    {
//        char tmp = str[left];
//        str[left] = str[right];
//        str[right] = tmp;
//        left++;
//        right--;
//    }
//}
//char* convertToTitle(int columnNumber) {
//    char* str = (char*)malloc(sizeof(char) * 20);
//    int i = 0;
//    while (columnNumber)
//    {
//
//        str[i++] = --columnNumber % 26 + 'A';//先减1，加65
//        columnNumber /= 26;
//    }
//    str[i] = '\0';
//    reverse(str);//逆置
//    return str;
//}
//
//
//int main()
//{
//    int n = 1;
//    convertToTitle(n);
//    return 0;
//}


#include<stdlib.h>
//int cmp_int(const void* a,const  void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//
//int majorityElement(int* nums, int numsSize) {
//    qsort(nums, numsSize, sizeof(int), cmp_int);
//    int max = 0;
//    int count = 0;
//    int num = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != nums[i - 1] && i > 0)
//        {
//            count = 0;
//        }
//        count++;
//        if (count > max)
//        {
//            max = count;
//            num = nums[i];
//        }
//    }
//    return num;
//}
//
//int main()
//{
//    int arr[] = { 3,2,3 };
//    int ret = majorityElement(arr, 3);
//    printf("%d", ret);
//    return 0;
//}


//169. 多数元素
//给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n / 2 ⌋ 的元素。
//你可以假设数组是非空的，并且给定的数组总是存在多数元素
//输入：[2,2,1,1,1,2,2]
//输出：2

//方法一：先将数组排序，因为这里众数出现的次数会大于n/2,那么中间元素一定是众数
//int cmp_int(const void* a, const void* b)
//{
//    return (*(int*)a) - (*(int*)b);
//}
//
//int majorityElement(int* nums, int numsSize) {
//    qsort(nums, numsSize, sizeof(int), cmp_int);
//    return nums[numsSize / 2];
//}

//方法二：先假设第一个数为众数，设置计数器，遇到相同的数就加一，不同就减一，计数器为0就从当前位置重新计数
//        众数最终计数一定大于0



//int majorityElement(int* nums, int numsSize) {
//    int count = 1;
//    int i = 0;
//    int ret = nums[0];
//    for (i = 1; i < numsSize; i++)
//    {
//        if (ret == nums[i])
//        {
//            count++;
//        }
//        else
//        {
//            count--;
//            if (count == 0)
//            {
//                count = 1;
//                ret = nums[i];
//            }
//        }
//    }
//    return ret;
//}



//int main()
//{
//	printf("%d\n", 5 / 2);
//	printf("%f\n", 5.0 / 2);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	if (!a)
//	{
//		printf("haha\n");
//	}
//	else
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	return 0;
//}

int main()
{
	int a = 10;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);//这样写行不行？
	printf("%d\n", sizeof int);//这样写行不行？
	return 0;
}