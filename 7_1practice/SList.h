#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;
//½áµã
typedef struct SListNode
{
	SListDataType data;
	struct SListNode* next;
}SListNode;



void SListPushBack(SListNode** pphead, SListDataType x);
void SListPopBack(SListNode** pphead);

void SListPushFront(SListNode** pphead, SListDataType x);
void SListPopFrant(SListNode** pphead);

void SListPrint(SListNode* phead);
int SListSize(SListNode* phead);