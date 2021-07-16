#include"SList.h"




void Test1()
{
	SList ps;
	SListInit(&ps);
	SListPushBack(&ps, 1);
	SListPushBack(&ps, 3);
	SListPushBack(&ps, 5);
	SListPushBack(&ps, 4);
	SListPushBack(&ps, 2);
	SListPrint(&ps);
	SListPopBack(&ps);
	SListPopBack(&ps);
	SListPrint(&ps);

	SListPushFrant(&ps,-1);
	SListPushFrant(&ps, 0);
	SListPrint(&ps);
	SListPopFrant(&ps);
	SListPopFrant(&ps);
	SListPrint(&ps);

	SListInsert(&ps, 10,1);
	SListPrint(&ps);

	SListErase(&ps, 1);
	SListPrint(&ps);



	int ret = SListFind(&ps, 3);
	printf("%d", ret);

}
int main()
{
	Test1();
	return 0;
}