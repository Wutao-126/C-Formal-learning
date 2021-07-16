#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;
typedef struct SList
{
	SLDataType* arr;
	int size;
	int capacity;
}SList;

//��ʼ��
void SListInit(SList*ps);
//����
void SListDestory(SList* ps);


//�������
void SListCheckCapacity(SList* ps);
//����
void SListBuyCapacity(SList* ps);
//��ӡ
void SListPrint(SList* ps);

//β��
void SListPushBack(SList* ps,SLDataType x);
//βɾ
void SListPopBack(SList* ps);

//ͷ��
void SListPushFrant(SList* ps, SLDataType x);
//ͷɾ
void SListPopFrant(SList* ps);

//����λ�ò���
void SListInsert(SList* ps, SLDataType x, int pos);
//����λ��ɾ��
void SListErase(SList* ps, SLDataType x);


//����
int SListFind(SList* ps, SLDataType x);
//����
void SListSort(SList* ps);