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

//66. ��һ
//����һ���� ���� ��ɵ� �ǿ� ��������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
//���λ���ִ�����������λ�� ������ÿ��Ԫ��ֻ�洢�������֡�
//����Լ���������� 0 ֮�⣬��������������㿪ͷ��

//���룺digits = [1, 2, 3]
//�����[1, 2, 4]
//���ͣ����������ʾ���� 123��

//˼·:���ȸ�����ĿҪ��̬����һ�����飬ע�⣺��ֹ���λ��λʱ����������������ǿ��Դ���ʱ��ԭ�����һ��
//     Ȼ��ԭ�����Ԫ�ؿ����������������У���*returnSize��ΪdigitsSize(��Ϊ����digitsSize�ᷢ���仯)
//     Ȼ��ֱ�Ӵ���������һ��Ԫ�ؿ�ʼ�жϸ������Ƿ�Ϊ9
//     ���Ϊ9�����ж�ǰһλ��ֱ����Ϊ9��������ֻʣһ��Ԫ��(Ϊ9��λ��Ҫ����λ����Ϊ0)
//   1.�������ֻʣһ��Ԫ��ҲΪ9(������Ԫ�ض�Ϊ9)���򽫵�һ��Ԫ����Ϊ1��Ȼ�󽫿��ٵ��������һ��Ԫ����Ϊ0
//   2.������һλ��Ϊ9���ߵ�һλ��Ϊ9����ֱ�ӽ���һλ��1��  

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