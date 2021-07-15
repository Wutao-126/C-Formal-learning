#include"List.h"


void TestList1()
{
	//ListNode* phead = NULL;
	//ListInit(&phead);
	ListNode* phead = ListInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	ListPrint(phead);

	ListPopBack(phead);
	ListPrint(phead);

	ListPushFrant(phead, 0);
	ListPushFrant(phead, -1);
	ListPrint(phead);


	ListPopFrant(phead);
	ListPopFrant(phead);
	ListPrint(phead);

}

void TestList2()
{
	ListNode* phead = ListInit();
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);

	ListNode* pos = ListFind(phead,3);
	ListInsert(pos, 30);
	ListPrint(phead);

	pos = ListFind(phead, 30);
	ListErase(pos);
	ListPrint(phead);

}

int main()
{
	//TestList1();

	TestList2();
	return 0;
}