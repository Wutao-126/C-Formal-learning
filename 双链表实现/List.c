#include"List.h"

ListNode* ListBuyNode(LDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


void ListInit(ListNode** pphead)
{
	assert(*pphead);
	*pphead = ListBuyNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;

}
void ListDestory(ListNode** pphead)
{
	assert(*pphead);
	ListNode* cur = (*pphead)->next;
	while (cur != *pphead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(*pphead);
	*pphead = NULL;
	cur = NULL;
}


void ListClear(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	phead->next = phead;
	phead->prev = phead;
}

void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	printf("head->");
	while (cur != phead)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("head\n");
}

void ListPushBack(ListNode*phead, LDataType x)
{
	assert(phead);
	ListNode* newnode = ListBuyNode(x);
	ListNode* tail = phead->prev;
	newnode->next = phead;
	newnode->prev = tail;
	phead->prev = newnode;
	tail->next = newnode;
}
void ListPopBack(ListNode*phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
	tail = NULL;
}
void ListPushFront(ListNode* phead, LDataType x)
{
	assert(phead);
	ListNode* newnode = ListBuyNode(x);
	newnode->prev = phead;
	newnode->next = phead->next;
	phead->next = newnode;
}
void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* next = phead->next;
	ListNode* nextnext = next->next;
	phead->next = nextnext;
	nextnext->prev = phead;
	free(next);
}


void ListInsert(ListNode* pos, LDataType x)
{
	assert(pos);
	ListNode* newnode = ListBuyNode(x);
	ListNode* next = pos->next;
	newnode->next = next;
	next->prev = newnode;
	pos->next = newnode;
}

void ListErase(ListNode* pos)
{
	assert(pos);
	assert(pos != pos->next);
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;
	prev->next = next;
	next->prev = prev;
	free(pos);
	pos = NULL;
}

ListNode* ListFind(ListNode* phead, LDataType x)
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
