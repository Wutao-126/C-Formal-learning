#include"List.h"

//������
ListNode* BuyListNode(LTDatatype x)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

//void ListInit(ListNode** pphead)
//{
//	*pphead = BuyListNode(0);
//	(*pphead)->next = *pphead;
//	(*pphead)->prev = *pphead;
//}

//��ʼ��
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//�ͷ�
void ListDestoryf(ListNode** pphead)
{
	assert(*pphead);
	ListClear(*pphead);
	free(*pphead);
	*pphead = NULL;
}

//����
void ListClear(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;

	while (phead != cur)
	{
		ListNode* curNext = cur->next;
		free(cur);
		cur = curNext;
	}
	phead->next = phead;
	phead->prev = phead;
}


//��ӡ
void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	printf("phead->");
	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


//β��
void ListPushBack(ListNode* phead, LTDatatype x)
{
	//assert(phead);
	//ListNode* tail = phead->prev;
	//ListNode* newNode = BuyListNode(x);
	//newNode->prev = tail;
	//tail->next = newNode;
	//newNode->next = phead;
	//phead->prev = newNode;
	ListInsert(phead->prev, x);
}

//βɾ
void ListPopBack(ListNode* phead)
{
	//assert(phead);
	//assert(phead->next != NULL);
	//ListNode* tail = phead->prev;
	//ListNode* tailPrev = tail->prev;
	//free(tail);
	//tailPrev->next = phead;
	//phead->prev = tailPrev;
	ListErase(phead->prev);
}

//ͷ��
void ListPushFrant(ListNode* phead, LTDatatype x)
{
	//assert(phead);
	//ListNode* newNode = BuyListNode(x);
	//ListNode* first = phead->next;
	//
	//phead->next = newNode;
	//newNode->prev = phead;

	//newNode->next = first;
	//first->prev = newNode;
	ListInsert(phead->next, x);
}


//ͷɾ
void ListPopFrant(ListNode* phead)
{
	//assert(phead);
	//assert(phead != phead->next);
	//ListNode* next = phead->next;
	//ListNode* nextnext = next->next;
	//phead->next = nextnext;
	//nextnext->prev = phead;
	//free(next);
	ListErase(phead->next);
}

//����
ListNode* ListFind(ListNode* phead, LTDatatype x)
{
	assert(phead);
	ListNode* pos = phead->next;
	while (pos != phead)
	{
		if (pos->data == x)
		{
			return pos;
		}
		pos = pos->next;
	}
	return NULL;
}

//�м��
void ListInsert(ListNode* pos, LTDatatype x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* newNode = BuyListNode(x);

	posPrev->next = newNode;
	newNode->prev = posPrev;

	newNode->next = pos;
	pos->prev = newNode;
}

//�м�ɾ
void ListErase(ListNode* pos)
{
	assert(pos);
	assert(pos != pos->next);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}
