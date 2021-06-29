# define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"



void SeqListInit(SL* ps)
{
	//s.size = 0;
	//s.p = NULL;
	//s.capacity = 0;
	ps->p = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->p == NULL)
	{
		printf("申请内存失败\n");
		return 0;
	}
	ps->size = 0;
	ps->capacity = 4;
}

//尾插尾删 头插头删
void SeqListPushBack(SL* ps, SLDataType X)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	ps->p[ps->size] = X;
	ps->size++;
}

void SeqListPrint(SL* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->p[i]);
	}
	printf("\n");
}

void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		ps->capacity *= 2;
		ps->p = (SLDataType*)realloc(ps->p, sizeof(SLDataType) * ps->capacity);
		if (ps->p == NULL)
		{
			printf("增容失败\n");
			return 0;
		}
	}
}

void SeqListPopBack(SL* ps)
{
	ps->size--;
}

void SeqListPushFrant(SL* ps, SLDataType X)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while(end>=0)
	{
		ps->p[end + 1] = ps->p[end];
		end--;
	}
	ps->p[0] = X;
	ps->size++;
}

void SeqListPopFrant(SL* ps)
{
	assert(ps);
	int start = 1;
	while (start < ps->size)
	{
		ps->p[start - 1] = ps->p[start];
		start++;
	}
	ps->size--;
}

//任意位置的插入删除
//void SeqListinsert(SL* ps, int pos, SLDataType X)

//void SeqListErase(SL* ps, int pos)