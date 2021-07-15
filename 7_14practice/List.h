#pragma 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDatatype;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDatatype data;
}ListNode;

//void ListInit(ListNode** pphead);
//初始化
ListNode* ListInit();

//释放
void ListDestoryf(ListNode** pphead);

//清理
void ListClear(ListNode* phead);

void ListPrint(ListNode* phead);
//尾插
void ListPushBack(ListNode* phead, LTDatatype x);

//尾删
void ListPopBack(ListNode* phead);

//头插
void ListPushFrant(ListNode* phead, LTDatatype x);

//头删
void ListPopFrant(ListNode* phead);

//查找
ListNode* ListFind(ListNode* phead, LTDatatype x);

//中间插(在目标位的前面插入x)
void ListInsert(ListNode* pos, LTDatatype x);

//中间删
void ListErase(ListNode* pos);
