# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	double** a[3][4] = { 0 };
//	printf("%d", strlen("hello\0world"));
//	printf("%d", sizeof("hello\0world"));
//
//	return 0;
//}


//int Fab(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fab(n);
//	printf("%d\n", ret);
//	return 0;
//}


//1. 两数之和
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//你可以按任意顺序返回答案。
//输入：nums = [2,7,11,15], target = 9
//输出：[0, 1]

//思路：
// 遍历所有数，将它与他它后面的数两两相加，如果等于目标值，返回数组，结束


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int* retArr = (int*)malloc(8);
    *returnSize = 2;
    int i = 0;
    for (i = 0; i < numsSize - 1; i++)
    {
        int j = 0;
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                retArr[0] = i;
                retArr[1] = j;
                return retArr;
            }
        }
    }
    return 0;
}



//面试题 17.10. 主要元素
//数组中占比超过一半的元素称之为主要元素。给你一个 整数 数组，找出其中的主要元素。若没有，返回 -1 。请设计时间复杂度为 O(N) 、空间复杂度为 O(1) 的解决方案。
//输入：[1, 2, 5, 9, 5, 9, 5, 5, 5]
//输出：5


//目前阶段思路：将数组排序，若主要元素存在，肯定是数组中间那一个元素
//              且数组元素为偶数个时，中间元素的前一个数一定与中间元素相等
//              数组元素个数为奇数个时，第一个元素或者最后一个元素一定与中间元素相等




int cmp_int(void* a, void* b)
{
    return *(int*)a - *(int*)b;
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp_int);
    if (numsSize % 2 == 0)
    {
        if (nums[numsSize / 2 - 1] != nums[numsSize / 2])
            return -1;
    }
    else
    {
        if (nums[0] != nums[numsSize / 2] && nums[numsSize - 1] != nums[numsSize / 2])
            return -1;
    }
    return nums[numsSize / 2];
}




//141. 环形链表
//给定一个链表，判断链表中是否有环。
//如果链表中有某个节点，可以通过连续跟踪 next 指针再次到达，则链表中存在环。
//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
//如果 pos 是 - 1，则在该链表中没有环。
//注意：pos 不作为参数进行传递，仅仅是为了标识链表的实际情况。
//如果链表中存在环，则返回 true 。 否则，返回 false 。
//进阶：
//你能用 O(1)（即，常量）内存解决此问题吗？

//输入：head = [3,2,0,-4], pos = 1
//输出：true
//解释：链表中有一个环，其尾部连接到第二个节点。

//提示：
//链表中节点的数目范围是[0, 10^4]
//- 10^5 <= Node.val <= 10^5
//pos 为 - 1 或者链表中的一个 有效索引 。


//方法一(个人解法)：因为题目提示了结点的范围，所以我们直接根据最大的范围来遍历
//                  如果遍历次数超过了这个范围则该链表为有环链表
//                  如果结点为空了，那该链表为无环链表
//                  (当然如果没有提示则不能使用这种方法)



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    int i = 0;
    while (head)
    {
        i++;
        if (i > 10000)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}



//方法二(快慢指针):快指针走两步，慢指针走一步
//                 如果链表无环则快指针或者快指针的next肯定会为空
//                 如果链表有环则走到一定时间后快慢指针一定会相等


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode* head) {
    struct ListNode* fast = head, * slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}




//面试题 02.07. 链表相交
//给定两个（单向）链表，判定它们是否相交并返回交点。
//请注意相交的定义基于节点的引用，而不是基于节点的值。
//换句话说，如果一个链表的第k个节点与另一个链表的第j个节点是同一节点（引用完全相同），则这两个链表相交。


//输入：intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3

//方法一：
//个人思路(暴力解法)(时间复杂度O(N^2)):将A链表遍历，在遍历的同时将A链表的每一个位置与B链表的每一个位置相比较
//                   如果位置相同则说明链表相交，直接返回当前位置



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    while (headA)
    {
        struct ListNode* cur = headB;
        while (cur)
        {
            if (headA == cur)
            {
                return headA;
            }
            cur = cur->next;
        }
        headA = headA->next;
    }
    return 0;
}





//方法二：同位置法
//思路：先找出两链表长度差异，然后将较长的链表向后移动两链表相差的个数
//      这样两个链表长度就相同了，然后再一次比较位置是否相同即可


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    struct ListNode* curA = headA, * curB = headB;
    int countA = 0, countB = 0;
    while (curA || curB)
    {
        if (curA != NULL)
        {
            curA = curA->next;
            countA++;
        }
        if (curB != NULL)
        {
            curB = curB->next;
            countB++;
        }
    }

    if (countA < countB)
    {
        int count = countB - countA;
        while (count)
        {
            headB = headB->next;
            count--;
        }
    }
    else
    {
        int count = countA - countB;
        while (count)
        {
            headA = headA->next;
            count--;
        }
    }
    while (headA && headB)
    {
        if (headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }

    return NULL;
}



//方法三(找环法)：将两个链表链接，判断链接后的链表是否有环，如果有是相交链表