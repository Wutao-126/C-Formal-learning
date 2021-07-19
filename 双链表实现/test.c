#include"List.h"




void Test1()
{
	ListNode* List;
	ListInit(&List);
	ListPushBack(List, 1);
	ListPushBack(List, 2);
	ListPushBack(List, 3);
	ListPushBack(List, 4);
	ListPrint(List);

	/*ListPopBack(List);
	ListPopBack(List);
	ListPrint(List);

	ListPushFront(List, 0);
	ListPushFront(List, -1);
	ListPrint(List);

	ListPopFront(List);
	ListPopFront(List);
	ListPrint(List);

	ListNode* pos = ListFind(List, 2);
	ListInsert(pos, 3);
	ListPrint(List);*/

	ListNode*pos = ListFind(List, 4);
	ListErase(pos);
	ListPrint(List);

}
int main()
{
	Test1();
	return 0;
}