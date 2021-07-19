#include"SList.h"

SListNode* SListBuyNode(SLDataType x)
{
	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}

void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");

}

void SListPushBack(SListNode** pphead, SLDataType x)
{
	SListNode* newnode = SListBuyNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}

void SListPopBack(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = (*pphead)->next;
		SListNode* tailprev = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
			tailprev = tailprev->next;
		}
		free(tail);
		tail = NULL;
		tailprev->next = NULL;
	}
}

void SListPushFront(SListNode** pphead, SLDataType x)
{
	SListNode* newnode = SListBuyNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}
void SListPopFront(SListNode** pphead)
{
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}
void SListInsertAfter( SListNode* pos, SLDataType x)
{
	assert(pos);
	SListNode* newnode = SListBuyNode(x);
	SListNode* next = pos->next;
	pos->next = newnode;
	newnode->next = next;
}
void SListErase( SListNode* pos)
{
	assert(pos);
	if (pos->next)
	{
		SListNode* next = pos->next;
		SListNode* nextnext = next->next;
		pos->next = nextnext;
		free(next);
	}
}


SListNode* SListFind(SListNode** pphead, SLDataType x)
{
	SListNode* cur = *pphead;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SListModefy(SListNode** pphead, SLDataType x, SLDataType y)
{
	if (*pphead == NULL)
	{
		return;
	}
	SListNode* cur = *pphead;
	while (cur)
	{
		if (cur->data == x)
		{
			cur->data = y;
		}
		cur = cur->next;
	}
}


int SListSize(SListNode** pphead)
{
	SListNode* cur = *pphead;
	int size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}