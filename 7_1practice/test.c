# define _CRT_SECURE_NO_WARNINGS
#include"SList.h"

int main()
{
	//SListNode* phead = NULL;
	SListNode* pList = NULL;
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);

	SListPrint(pList);

	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);

	SListPrint(pList);

	SListPushFront(&pList, 4);
	SListPushFront(&pList, 3);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 1);

	SListPrint(pList);

	SListPopFrant(&pList);
	SListPopFrant(&pList);
	SListPopFrant(&pList);
	SListPopFrant(&pList);

	SListPrint(pList);
	return 0;
}