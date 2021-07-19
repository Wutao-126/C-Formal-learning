#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LDataType;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LDataType data;
}ListNode;

void ListInit(ListNode**pphead);
void ListDestory(ListNode**pphead);
void ListClear(ListNode* phead);
void ListPrint(ListNode* phead);


void ListPushBack(ListNode*phead,LDataType x);
void ListPopBack(ListNode*phead);
void ListPushFront(ListNode*phead, LDataType x);
void ListPopFront(ListNode*phead);

void ListInsert(ListNode*pos, LDataType x);
void ListErase(ListNode* pos);

ListNode* ListFind(ListNode* phead, LDataType x);