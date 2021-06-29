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
//β��βɾ ͷ��ͷɾ

void SeqListPushBack(SL*ps, SLDataType X);
void SeqListPopBack(SL* ps);
void SeqListPushFrant(SL* ps, SLDataType X);
void SeqListPopFrant(SL* ps);

//����λ�õĲ���ɾ��
void SeqListinsert(SL* ps, int pos, SLDataType X);
void SeqListErase(SL* ps, int pos);