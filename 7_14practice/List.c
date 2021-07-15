#include"List.h"

//申请结点
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

//初始化
ListNode* ListInit()
{
	ListNode* phead = BuyListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

//释放
void ListDestoryf(ListNode** pphead)
{
	assert(*pphead);
	ListClear(*pphead);
	free(*pphead);
	*pphead = NULL;
}

//清理
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


//打印
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


//尾插
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

//尾删
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

//头插
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


//头删
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

//查找
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

//中间插
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

//中间删
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
