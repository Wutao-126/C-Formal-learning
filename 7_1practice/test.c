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

	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);

	//SListPrint(pList);

	//SListPushFront(&pList, 4);
	//SListPushFront(&pList, 3);
	//SListPushFront(&pList, 2);
	//SListPushFront(&pList, 1);

	//SListPrint(pList);

	//SListPopFrant(&pList);
	//SListPopFrant(&pList);
	//SListPopFrant(&pList);
	//SListPopFrant(&pList);

	//SListPrint(pList);

	SListNode*pos= SListFind(pList,3);
	if (pos)
	{
		pos->data = 30;
	}
	SListPrint(pList);

	//SListPushMid(&pList, 30,20);
	//SListPrint(pList);
	SListInsertAfter(SListFind(pList, 30), 20);
	SListPrint(pList);

	SListEraseAfter(SListFind(pList, 2), 2);
	SListPrint(pList);
	return 0;
}