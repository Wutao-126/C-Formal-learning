#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//int maxSubArray(int* nums, int numsSize) {
//    int i = 0;
//    int max = nums[0];
//    while (i < numsSize)
//    {
//        int j = i;
//        int sum = 0;
//        while (j < numsSize)
//        {
//            sum += nums[j];
//            if (sum > max)
//            {
//                max = sum;
//            }
//            j++;
//        }
//        i++;
//    }
//    return max;
//}
//
//int main()
//{
//    int arr[] = { -2,1,-3,4,-1,2,1,-5,4 };
//    int ret = maxSubArray(arr, 9);
//    printf("%d", ret);
//    return 0;
//}


//int lengthOfLastWord(char* s) {
//    int len = strlen(s) - 1;
//    while (*(s + len) == 32 && len >= 0)
//    {
//        len--;
//    }
//    int size = 0;
//    while (*(s + len) != 32 && len >= 0)
//    {
//        size++;
//        len--;
//    }
//    return size;
//}
//
//int main()
//{
//    char str[] = "a";
//    printf("%d", lengthOfLastWord(str));
//    return 0;
//}

//66. 加一
//给定一个由 整数 组成的 非空 数组所表示的非负整数，在该数的基础上加一。
//最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。

//输入：digits = [1, 2, 3]
//输出：[1, 2, 4]
//解释：输入数组表示数字 123。

//思路:首先根据题目要求动态创建一个数组，注意：防止最高位进位时导致数组溢出，我们可以创建时比原数组大一个
//     然后将原数组的元素拷贝到创建的数组中，将*returnSize置为digitsSize(因为后面digitsSize会发生变化)
//     然后直接从数组的最后一个元素开始判断该数字是否为9
//     如果为9，则判断前一位，直到不为9或者数组只剩一个元素(为9的位置要将该位置置为0)
//   1.如果数组只剩一个元素也为9(即所有元素都为9)，则将第一个元素置为1，然后将开辟的数组最后一个元素置为0
//   2.如果最后一位不为9或者第一位不为9，则直接将这一位加1；  

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * (digitsSize + 1));
    *returnSize = digitsSize;
    int i = 0;
    memcpy(arr, digits, digitsSize * 4);
    while (arr[digitsSize - 1] == 9 && (digitsSize - 1) > 0)
    {
        arr[digitsSize - 1] = 0;
        digitsSize--;
    }
    if ((digitsSize - 1) == 0 && arr[0] == 9)
    {
        arr[0] = 1;
        arr[(*returnSize)++] = 0;
    }
    else
    {
        arr[digitsSize - 1] += 1;
    }
    return arr;
}



//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[5] = { 0 };
//	memcpy(arr2, arr1, 12);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}