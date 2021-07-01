# define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

SListNode* BuySListNode(SListDataType x)
{
	//ÉêÇë½áµã
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("ÉêÇë½áµãÊ§°Ü\n");
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

//Î²²å
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//ÕÒÎ²
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


//Î²É¾
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


//Í·²å
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	SListNode* cur = *pphead;
	*pphead = newNode;
	(*pphead)->next = cur;
}

//Í·É¾
void SListPopFrant(SListNode** pphead)
{
	*pphead = (*pphead)->next;
}