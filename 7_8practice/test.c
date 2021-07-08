# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	/*char str[10];
//	str[2] = "string";*/
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == 32)
//		{
//			printf("%%%d",20);
//		}
//		else
//		{
//			printf("%c", str[i]);
//		}
//	}
//	return 0;
//}

//剑指 Offer 18. 删除链表的节点
//给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
//返回删除后的链表的头节点。

//输入: head = [4,5,1,9], val = 5
//输出: [4, 1, 9]

//基本思路：快慢指针法
//         首先创建两个位于头指针之前的指针，一个用来保存头指针，一个用来保存删除位置的前一个位置的地址
//         然后将head指针依次向后遍历，并判断，如果等于删除值则将上一个位置的next指向删除位置的next，否则不改变指向
//         重复上述步骤直到head为空
//         注意如果最后一个为删除值，则上一个位置的next为空，还需要将head置为空



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val) {
    struct ListNode* newhead = NULL, * cur = NULL;
    newhead = cur = (struct ListNode*)malloc(sizeof(struct ListNode));
    while (head)
    {
        if (head->val == val)
        {
            cur->next = head->next;
            cur = cur->next;
            free(head);
            if (cur == NULL)
                head = NULL;
            else
                head = cur->next;
        }
        else
        {
            cur->next = head;
            cur = cur->next;
            head = head->next;
        }
    }
    return newhead->next;
}