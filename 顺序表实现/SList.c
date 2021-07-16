#include"SList.h"

void SListInit(SList* ps)
{
	assert(ps);
	ps->arr = (SLDataType*)malloc(sizeof(SLDataType) * 5);
	if (ps->arr == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	ps->capacity = 5;
	ps->size = 0;
}

void SListDestory(SList* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->size = 0;
}

void SListCheckCapacity(SList* ps)
{
	if (ps->size == ps->capacity)
	{
		SListBuyCapacity(ps);
	}
}

void SListBuyCapacity(SList* ps)
{
	SLDataType* tmp = (SLDataType*)realloc(ps->arr, sizeof(SLDataType) * ps->capacity * 2);
	if (tmp == NULL)
	{
		printf("realloc fail\n");
		exit(-1);
	}
	ps->arr = tmp;
	ps->capacity *= 2;
}

void SListPrint(SList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}


void SListPushBack(SList* ps, SLDataType x)
{
	//assert(ps);
	//SListCheckCapacity(ps);
	//ps->arr[ps->size] = x;
	//ps->size++;
	SListInsert(ps, x, ps->size);
	SListSort(ps);
}

void SListPopBack(SList* ps)
{
	//assert(ps);
	//assert(ps->size > 0);
	//ps->size--;

	SListErase(ps, ps->size - 1);
}

void SListPushFrant(SList* ps, SLDataType x)
{
	//assert(ps);
	//SListCheckCapacity(ps);
	//int i = 0;
	//for (i = ps->size - 1; i >= 0; i--)
	//{
	//	ps->arr[i + 1] = ps->arr[i];
	//}
	//ps->arr[0] = x;
	//ps->size++;
	SListInsert(ps, x, 0);
	SListSort(ps);

}

void SListPopFrant(SList* ps)
{
	//assert(ps);
	//assert(ps->size > 0);
	//int i = 0;
	//for (i = 0; i < ps->size - 1; i++)
	//{
	//	ps->arr[i] = ps->arr[i + 1];
	//}
	//ps->size--;
	SListErase(ps, 0);
}

void SListInsert(SList* ps, SLDataType x, int pos)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	SListCheckCapacity(ps);
	int i = 0;
	for (i = ps->size-1 ; i >= pos; i--)
	{
		ps->arr[i+1] = ps->arr[i];
	}
	ps->arr[pos] = x;
	ps->size++;
}

void SListErase(SList* ps, SLDataType pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);
	int i = 0;
	for (i = pos; i < ps->size; i++)
	{
		ps->arr[i] = ps->arr[i + 1];
	}
	ps->size--;
}

int SListFind(SList* ps, SLDataType x)
{
	int left = 0;
	int right = ps->size - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (ps->arr[mid] > x)
		{
			right = mid - 1;
		}
		else if (ps->arr[mid] < x)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	printf("ÎÞ´ËÔªËØ\n");
	return -1;
}


int cmp_int(const void* a, const void* b)
{
	return *(int*)a - *(int*)b;
}
void SListSort(SList* ps)
{
	qsort(ps->arr, ps->size, sizeof(int), cmp_int);
}