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
		return ;
	}
	ps->size = 0;
	ps->capacity = 4;
}

void SeqListDestory(SL* ps)
{
	free(ps->p);
	ps->p = NULL;
	ps->size = 0;
	ps->capacity = 0;
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
			return ;
		}
	}
}

//尾插尾删 头插头删
void SeqListPushBack(SL* ps, SLDataType X)
{
	//assert(ps);
	//SeqListCheckCapacity(ps);
	//ps->p[ps->size] = X;
	//ps->size++;
	SeqListinsert(ps, ps->size, X);
}

void SeqListPopBack(SL* ps)
{
	//ps->size--;

	SeqListErase(ps, ps->size - 1);
}

void SeqListPushFrant(SL* ps, SLDataType X)
{
	//assert(ps);
	//SeqListCheckCapacity(ps);
	//int end = ps->size - 1;
	//while(end>=0)
	//{
	//	ps->p[end + 1] = ps->p[end];
	//	end--;
	//}
	//ps->p[0] = X;
	//ps->size++;

	SeqListinsert(ps, 0, X);
}

void SeqListPopFrant(SL* ps)
{
	//assert(ps);
	//int start = 1;
	//while (start < ps->size)
	//{
	//	ps->p[start - 1] = ps->p[start];
	//	start++;
	//}
	//ps->size--;

	SeqListErase(ps, 0);
}

//任意位置的插入删除
void SeqListinsert(SL* ps, int pos, SLDataType X)
{
	assert(ps);
	assert(pos <= ps->size && pos >= 0);

	SeqListCheckCapacity(ps);

	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->p[end + 1] = ps->p[end];
		end--;
	}
	ps->p[pos] = X;
	ps->size++;
}

void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos < ps->size && pos >= 0);
	int start = pos;
	while (start < ps->size - 1)
	{
		ps->p[start] = ps->p[start + 1];
		start++;
	}
	ps->size--;
}


//查找

int SeqListFind(SL* ps, SLDataType X)
{
	assert(ps);
	int i = 0;
	while (i < ps->size)
	{
		if (ps->p[i] == X)
		{
			return i;
		}
		i++;
	}
	return -1;
}

//删除任意数
void SeqListDelete(SL* ps, SLDataType X)
{
	int pos = SeqListFind(ps, X);
	if (pos != -1)
	{
		SeqListErase(ps, pos);
	}
}