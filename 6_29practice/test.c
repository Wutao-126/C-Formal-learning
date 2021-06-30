# define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//≤‚ ‘Õ∑Œ≤≤Â»Î…æ≥˝
void TestSeqList()
{
	SeqList s ;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFrant(&s, -1);
	SeqListPrint(&s);

	SeqListPopFrant(&s);
	SeqListPopFrant(&s);

    SeqListPrint(&s);

	SeqListinsert(&s, 1, 0);
	SeqListinsert(&s, 3, 0);
	SeqListPrint(&s);

	SeqListErase(&s, 1);
	SeqListErase(&s, 2);
	SeqListPrint(&s);

	SeqListDelete(&s, 5);
	SeqListPrint(&s);

	SeqListDestory(&s);

}
int main()
{
	TestSeqList();
	return 0;
}








//int removeDuplicates(int* nums, int numsSize) {
//    if (nums == NULL)
//    {
//        return 0;
//    }
//    int a = 0;
//    int b = 1;
//    while (b < numsSize)
//    {
//        if (nums[a] != nums[b])
//        {
//            nums[++a] = nums[b];
//        }
//        b++;
//    }
//    return a + 1;
//}
//int main()
//{
//    int nums[5] = { 1,1,3,3,4 };
//    printf("%d", removeDuplicates(nums, 5));
//    return 0;
//}