#include<stdio.h>
//int main()
//{
//	char arr[2][4];
//	strcpy((char*)arr, "you");
//	strcpy(arr[1], "me");
//	arr[0][3] = '&';
//	printf("%s\n", arr);
//	return 0;
//}

//unsigned long g_ulGlobal = 0;
//void GlobalInit(unsigned long ulArg)
//{
//	ulArg = 0x01;
//	return;
//} 
//
//void Test()
//{
//	GlobalInit(g_ulGlobal);
//	printf("%lu", g_ulGlobal);
//	return;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//struct sList
//{
//	int val;
//	struct sList* next;
//};
//
//struct sList* FindNodeK(struct sList* head, k)
//{
//	struct sList* slow = head;
//	struct sList* fast = head;
//	while (k)
//	{
//		fast = fast->next;
//		k--;
//	}
//	
//	while (fast)
//	{
//		slow = slow->next;
//		fast = fast->next;
//	}
//	return slow;
//}



//138. 复制带随机指针的链表
//给你一个长度为 n 的链表，每个节点包含一个额外增加的随机指针 random ，该指针可以指向链表中的任何节点或空节点。
//构造这个链表的 深拷贝。 深拷贝应该正好由 n 个 全新 节点组成，其中每个新节点的值都设为其对应的原节点的值。
//新节点的 next 指和 random 指针也都应指向复制链表中的新节点，并使原链表和复制链表中的这些指针能够表示相同的链表状态。
//复制链表中的指针都不应指向原链表中的节点 。




//思路：复制每一个结点将复制的结点链接在每一个结点的后面
//      1->1'->2->2'->3->3'->4->4'
//      这样复制结点的random等于原结点的random的next
//      最后再将复制结点与原结点分离即可  （文件外附示意图）




/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    if (head == NULL)
    {
        return NULL;
    }

    //1.拷贝结点链接到原链表的后面
    struct Node* cur = head;
    while (cur)
    {
        struct Node* copy = (struct Node*)malloc(sizeof(struct Node));
        copy->next = NULL;
        copy->random = NULL;
        copy->val = cur->val;

        struct Node* next = cur->next;
        cur->next = copy;
        copy->next = next;

        cur = next;
    }

    //2.处理拷贝结点的random
    cur = head;
    while (cur)
    {
        struct Node* copy = cur->next;
        if (cur->random != NULL)
        {
            copy->random = cur->random->next;
        }
        else
        {
            copy->random = NULL;
        }
        cur = copy->next;
    }

    //3.拆开两条链表
    cur = head;
    struct Node* copyhead = cur->next;
    while (cur)
    {
        struct Node* copy = cur->next;
        struct Node* next = copy->next;
        cur->next = next;
        if (next != NULL)
        {
            copy->next = next->next;
        }
        else
        {
            copy->next = NULL;
        }
        cur = cur->next;
    }
    return copyhead;
}