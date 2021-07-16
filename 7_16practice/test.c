#include"Stack.h"


int main()
{
	Stack st;
	StackInit(&st);

	StackPush(&st,1);
	StackPush(&st,2);
	StackPush(&st,3);
	StackPush(&st,4);
	StackPush(&st,5);
	while (!StackEmpty(&st))
	{
		printf("%d ", StackTop(&st));
		StackPop(&st);
	}
	printf("\n");

	StackDestory(&st);


	return 0;
}


















































































//int main()
//{
//	int a = 4;
//	printf("%d", (a++)++);
//	return 0;
//}

//int f(int a)
//{
//	int b = 0;
//	static int c = 3;
//	a = c++, b++;
//	return (a);
//} 
//int main()
//{
//	int a = 2, i, k;
//	for (i = 0; i < 2; i++) {
//		k = f(a++);
//	} 
//	printf(" % d\n", k);
//	return 0;
//}

//typedef struct ListNode ListNode;
//struct ListNode
//{
//	int val;
//	struct ListNode* next;
//};
//
//ListNode* reverse(ListNode* head)
//{
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode* cur = head->next;
//	ListNode* newhead = head;
//	newhead->next = NULL;
//	while (cur)
//	{
//		ListNode* next = cur->next;
//		cur->next = newhead;
//		newhead = cur;
//		cur = next;
//	}
//	return newhead;
//}
//
//int main()
//{
//	ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
//	ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = NULL;
//	n1->val = 1;
//	n2->val = 2;
//	n3->val = 3;
//	ListNode*newhead = reverse(n1);
//	while (newhead)
//	{
//		printf("%d->", newhead->val);
//		newhead = newhead->next;
//	}
//	return 0;
//}