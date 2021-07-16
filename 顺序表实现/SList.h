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

//初始化
void SListInit(SList*ps);
//销毁
void SListDestory(SList* ps);


//容量检查
void SListCheckCapacity(SList* ps);
//增容
void SListBuyCapacity(SList* ps);
//打印
void SListPrint(SList* ps);

//尾插
void SListPushBack(SList* ps,SLDataType x);
//尾删
void SListPopBack(SList* ps);

//头插
void SListPushFrant(SList* ps, SLDataType x);
//头删
void SListPopFrant(SList* ps);

//任意位置插入
void SListInsert(SList* ps, SLDataType x, int pos);
//任意位置删除
void SListErase(SList* ps, SLDataType x);


//查找
int SListFind(SList* ps, SLDataType x);
//排序
void SListSort(SList* ps);