# define _CRT_SECURE_NO_WARNINGS






//142. 环形链表 II
//给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。
//为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。
//如果 pos 是 - 1，则在该链表中没有环。
//注意，pos 仅仅是用于标识环的情况，并不会作为参数传递到函数中。
//说明：不允许修改给定的链表
//输入：head = [3,2,0,-4], pos = 1
//输出：返回索引为 1 的链表节点
//解释：链表中有一个环，其尾部连接到第二个节点。
//
// 
// 方法一(思路简单，代码较难)：先按照判断链表是否有环的方法，使用快慢指针，
//                             如果快指针为空则说明该链表无环，直接返回NULL
//                             如果快慢指针相等则说明该链表有环
//                             然后将两指针相等处断开，将快指针和head头指针看成两条链表
//                             这样问题就转化为判断两链表是否相交的问题
//                             比较两链表的长度，将较长的链表向后移动两链表长度之差个
//                             然后再同步向后移动比较两链表的地址
//                             相等时即为两链表相交处，即为最终问题：链表入环的第一个结点
//




#include<stdio.h>
#include<stdlib.h>


 struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;

    //判断链表是否有环，和找快慢指针相等处
    while (1)
    {
        if (fast == NULL || fast->next == NULL)
        {
            return NULL;
        }
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            break;
        }
    }

    //断开快慢指针相等处
    fast = slow->next;
    slow->next = NULL;

    //计算两链表的长度
    int lenhead = 0, lenfast = 0;
    struct ListNode* cur1 = head;
    struct ListNode* cur2 = fast;
    while (cur1 || cur2)
    {
        if (cur1 != NULL)
        {
            lenhead++;
            cur1 = cur1->next;
        }
        if (cur2 != NULL)
        {
            lenfast++;
            cur2 = cur2->next;
        }
    }

    //比较两链表的长度并将较长的向后移动长度之差个
    if (lenhead > lenfast)
    {
        int len = lenhead - lenfast;
        while (len)
        {
            head = head->next;
            len--;
        }
    }
    else
    {
        int len = lenfast - lenhead;
        while (len)
        {
            fast = fast->next;
            len--;
        }
    }

    //同步向后移动比较两链表地址是否相等
    while (head != fast)
    {
        head = head->next;
        fast = fast->next;
    }
    return head;
}

int main()
{
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 3;
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n2->val = 2;
    struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n3->val = 0;
    struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n4->val = 4;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n2;
    detectCycle(n1);
    return 0;
}



//方法二(思路较难，代码简单)：设未进入环之前的长度为L，环的周长为C,慢指针在环中走的长度为X
 //                           则在两指针相等的时候慢指针走的距离为L+X
 //                           快指针走的距离为L+n*C+X(n为圈数)
 //                           所以 2*(L+X) = L+n*C+X
 //                           所以 L = n*C-X
 //                           此时若两指针分别从head处和fast处同时走
 //                           则一定会在环入口处相交


struct ListNode* detectCycle(struct ListNode* head) {
    struct ListNode* slow = head, * fast = head;
    while (1)
    {
        if (fast == NULL || fast->next == NULL)
        {
            return NULL;
        }
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            break;
        }
    }
    while (head != fast)
    {
        head = head->next;
        fast = fast->next;
    }
    return head;
}