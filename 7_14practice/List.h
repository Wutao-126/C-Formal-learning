#pragma 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDatatype;
typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDatatype data;
}ListNode;

//void ListInit(ListNode** pphead);
//��ʼ��
ListNode* ListInit();

//�ͷ�
void ListDestoryf(ListNode** pphead);

//����
void ListClear(ListNode* phead);

void ListPrint(ListNode* phead);
//β��
void ListPushBack(ListNode* phead, LTDatatype x);

//βɾ
void ListPopBack(ListNode* phead);

//ͷ��
void ListPushFrant(ListNode* phead, LTDatatype x);

//ͷɾ
void ListPopFrant(ListNode* phead);

//����
ListNode* ListFind(ListNode* phead, LTDatatype x);

//�м��(��Ŀ��λ��ǰ�����x)
void ListInsert(ListNode* pos, LTDatatype x);

//�м�ɾ
void ListErase(ListNode* pos);
