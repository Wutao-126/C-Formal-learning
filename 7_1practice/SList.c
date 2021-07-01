# define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

SListNode* BuySListNode(SListDataType x)
{
	//������
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("������ʧ��\n");
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

//β��
void SListPushBack(SListNode** pphead, SListDataType x)
{
	//��β
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


//βɾ
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


//ͷ��
void SListPushFront(SListNode** pphead, SListDataType x)
{
	SListNode* newNode = BuySListNode(x);
	SListNode* cur = *pphead;
	*pphead = newNode;
	(*pphead)->next = cur;
}

//ͷɾ
void SListPopFrant(SListNode** pphead)
{
	*pphead = (*pphead)->next;
}