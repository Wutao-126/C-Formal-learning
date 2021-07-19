#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;
typedef struct SListNode
{
	struct SListNode* next;
	 SLDataType data;
}SListNode;

void SListPushBack(SListNode** pphead, SLDataType x);
void SListPopBack(SListNode** pphead);
void SListPushFront(SListNode** pphead, SLDataType x);
void SListPopFront(SListNode** pphead);
void SListInsertAfter(SListNode* pos, SLDataType x);
void SListErase( SListNode* pos);

SListNode* SListFind(SListNode** pphead, SLDataType x);
void SListModefy(SListNode** pphead, SLDataType x, SLDataType y);

int SListSize(SListNode** pphead);