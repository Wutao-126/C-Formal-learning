#include"SList.h"

int main()
{
	SListNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 5);
	SListPrint(plist);

	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);

	SListPrint(plist);

	/*SListPushFront(&plist, 0);
	SListPushFront(&plist, -1);
	SListPushFront(&plist, -2);
	SListPrint(plist);

	SListPopFront(&plist);
	SListPopFront(&plist);
	SListPrint(plist);

	SListNode* pos = SListFind(&plist,10);
	SListInsertAfter( pos, 30);
	SListPrint(plist);

	SListModefy(&plist, 1, 10);
	SListPrint(plist);*/


	return 0;
}