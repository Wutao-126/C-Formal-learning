# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("%d", !0);
//	return 0;
//}


//int Count1(size_t n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////10111
//int main()
//{
//	printf("%d", Count1(23));
//	return 0;
//}
// 5 5 5-1 = 24





#include<stdlib.h>
struct ListNode {
    int val;
     struct ListNode *next;
 };

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newhead = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = cur->next;
        next = newhead;
        newhead = cur;
        cur = cur->next;
    }
    return newhead;
}

int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 1;
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n2->val = 2;
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n3->val = 3;
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n4->val = 4;
    struct ListNode* n5 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n5->val = 5;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;
    reverseList(n1);
    return 0;
}


//234. 回文链表
//请判断一个链表是否为回文链表。

//输入: 1->2->2->1
//输出 : true

//输入: 1->2
//输出 : false



//思路：找出链表结点个数，将链表从中间分为两部分，将任一部分反转
//      然后将两部分的值依次对比


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head) {
    int Listsize = 0;
    struct ListNode* cur = head;
    while (cur)
    {
        Listsize++;
        cur = cur->next;
    }
    cur = head;
    Listsize /= 2;
    while (Listsize)
    {
        cur = cur->next;
        Listsize--;
    }
    struct ListNode* mid = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;
        cur->next = mid;
        mid = cur;
        cur = next;
    }
    while (head && mid)
    {
        if (head->val != mid->val)
        {
            return false;
        }
        head = head->next;
        mid = mid->next;
    }
    return true;
}
