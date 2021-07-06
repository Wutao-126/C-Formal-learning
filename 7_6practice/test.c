# define _CRT_SECURE_NO_WARNINGS
//剑指 Offer 25. 合并两个排序的链表
//输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。
//输入：1->2->4, 1->3->4
//输出：1->1->2->3->4->4


//基本思路：创建两个结点(一头，一尾)，尾结点用来移动，
//          首先先将两个链表中小的第一个数作为头结点初始化创建的两个结点
//          然后再一次比较两个链表中的数的大小，将较小的链表的结点链接到新创建的结点后面，再将取下的旧结点向后移动
//          重复上述循环直到，有一个链表为空
//          将不为空的链表结点，链接到合并链表的后面


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    if (l1->val >= l2->val)
    {
        head = tail = l2;
        l2 = l2->next;
    }
    else
    {
        head = tail = l1;
        l1 = l1->next;
    }

    while (l1 && l2)
    {
        if (l1->val >= l2->val)
        {
            tail->next = l2;
            l2 = l2->next;
        }
        else
        {
            tail->next = l1;
            l1 = l1->next;
        }
        tail = tail->next;
    }
    if (l1 == NULL)
    {
        tail->next = l2;
    }
    else
    {
        tail->next = l1;
    }
    return head;
}



//链表分割
//现有一链表的头指针 ListNode* pHead，给一定值x，编写一段代码将所有小于x的结点排在其余结点之前，
//且不能改变原来的数据顺序，返回重新排列后的链表的头指针。
//例:4->2->3->1->5   x=3
//   2->1->3->4->5


//基本思路:创建两个链表，遍历原链表
//         一个存放比x小的值，一个存放比x大的值
//         再将大链表连接在小链表的后面



/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
typedef struct ListNode Node;
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here

        if (pHead == NULL)
        {
            return pHead;
        }
        Node* lessListHead = NULL, * lessListTail = NULL;//头用来保存头位置，尾用来移动
        Node* greaterListHead = NULL, * greaterListTail = NULL;
        lessListHead = lessListTail = (Node*)malloc(sizeof(Node));//建立哨兵位，即第一个位置不放任何值
        greaterListHead = greaterListTail = (Node*)malloc(sizeof(Node));

        while (pHead)
        {
            if (pHead->val < x)
            {
                lessListTail->next = pHead;
                lessListTail = lessListTail->next;
            }
            else
            {
                greaterListTail->next = pHead;
                greaterListTail = greaterListTail->next;
            }
            pHead = pHead->next;
        }
        greaterListTail->next = NULL;//将大链表尾结点置为NULL，不然链表没有终点
        lessListTail->next = greaterListHead->next;//将小链表与大链表链接，注意哨兵位不是头位置，而是哨兵位的下一个位置
        Node* newhead = lessListHead->next;//创建新的头结点保存哨兵位的下一个位置
        free(lessListHead);
        return newhead;
    }
};