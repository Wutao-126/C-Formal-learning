#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* p;
	int size;
	int capacity;
}SL, SeqList;

void SeqListInit(SL* ps);
void SeqListPrint(SL*ps);
void SeqListCheckCapacity(SL* ps);
//尾插尾删 头插头删

void SeqListPushBack(SL*ps, SLDataType X);
void SeqListPopBack(SL* ps);
void SeqListPushFrant(SL* ps, SLDataType X);
void SeqListPopFrant(SL* ps);

//任意位置的插入删除
void SeqListinsert(SL* ps, int pos, SLDataType X);
void SeqListErase(SL* ps, int pos);