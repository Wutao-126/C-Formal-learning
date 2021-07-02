# define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

SListNode* BuySListNode(SListDataType x)
{
	//申请结点
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("申请结点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

int SListSize(SListNode* phead)
{
	SListNode* cur = phead;
	int size = 0;
	while (cur != NULL)
	{
		size++;
		cur = cur->next;
	}
	return size;
}

//尾插
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//找尾
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead= newNode;
	}
	else
	{
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}


//尾删
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
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;
		prev->next = NULL;
	}
}


//头插
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}

//头删
void SListPopFrant(SListNode** pphead)
{
	//1.空
	if (*pphead == NULL)
	{
		return;
	}
	//2.一个及以上结点
	else
	{
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}

//查找
SListNode* SListFind(SListNode* phead, SListDataType x)
{
	SListNode* cur = phead;
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

//当前位置之前插入（一般不这样做）
//void SListPushMid(SListNode** pphead, SListDataType x, SListDataType y)
//{
//	SListNode* cur = *pphead;
//	while (cur)
//	{
//		if ((cur->next)->data == x)
//		{
//			SListNode* next = cur->next;
//			SListNode* newNode = BuySListNode(y);
//			cur->next = newNode;
//			newNode->next = next;
//			return;
//		}
//		cur = cur->next;
//	}
//}


void SListInsertAfter(SListNode* pos, SListDataType x)
{
	assert(pos);
	SListNode* newNode = BuySListNode(x);
	newNode->next = pos->next;
	pos->next = newNode;
}

void SListEraseAfter(SListNode* pos, SListDataType x)
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