# define _CRT_SECURE_NO_WARNINGS
//��ָ Offer 25. �ϲ��������������
//����������������������ϲ�����������ʹ�������еĽڵ���Ȼ�ǵ�������ġ�
//���룺1->2->4, 1->3->4
//�����1->1->2->3->4->4


//����˼·�������������(һͷ��һβ)��β��������ƶ���
//          �����Ƚ�����������С�ĵ�һ������Ϊͷ����ʼ���������������
//          Ȼ����һ�αȽ����������е����Ĵ�С������С������Ľ�����ӵ��´����Ľ����棬�ٽ�ȡ�µľɽ������ƶ�
//          �ظ�����ѭ��ֱ������һ������Ϊ��
//          ����Ϊ�յ������㣬���ӵ��ϲ�����ĺ���


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }

    struct ListNode* head = NULL;
    struct ListNode* tail = NULL;

    if (l1->val >= l2->val)
    {
        head = tail = l2;
        l2 = l2->next;
    }
    else
    {
        head = tail = l1;
        l1 = l1->next;
    }

    while (l1 && l2)
    {
        if (l1->val >= l2->val)
        {
            tail->next = l2;
            l2 = l2->next;
        }
        else
        {
            tail->next = l1;
            l1 = l1->next;
        }
        tail = tail->next;
    }
    if (l1 == NULL)
    {
        tail->next = l2;
    }
    else
    {
        tail->next = l1;
    }
    return head;
}



//����ָ�
//����һ�����ͷָ�� ListNode* pHead����һ��ֵx����дһ�δ��뽫����С��x�Ľ������������֮ǰ��
//�Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ�롣
//��:4->2->3->1->5   x=3
//   2->1->3->4->5


//����˼·:����������������ԭ����
//         һ����ű�xС��ֵ��һ����ű�x���ֵ
//         �ٽ�������������С����ĺ���



/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
typedef struct ListNode Node;
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // write code here

        if (pHead == NULL)
        {
            return pHead;
        }
        Node* lessListHead = NULL, * lessListTail = NULL;//ͷ��������ͷλ�ã�β�����ƶ�
        Node* greaterListHead = NULL, * greaterListTail = NULL;
        lessListHead = lessListTail = (Node*)malloc(sizeof(Node));//�����ڱ�λ������һ��λ�ò����κ�ֵ
        greaterListHead = greaterListTail = (Node*)malloc(sizeof(Node));

        while (pHead)
        {
            if (pHead->val < x)
            {
                lessListTail->next = pHead;
                lessListTail = lessListTail->next;
            }
            else
            {
                greaterListTail->next = pHead;
                greaterListTail = greaterListTail->next;
            }
            pHead = pHead->next;
        }
        greaterListTail->next = NULL;//��������β�����ΪNULL����Ȼ����û���յ�
        lessListTail->next = greaterListHead->next;//��С��������������ӣ�ע���ڱ�λ����ͷλ�ã������ڱ�λ����һ��λ��
        Node* newhead = lessListHead->next;//�����µ�ͷ��㱣���ڱ�λ����һ��λ��
        free(lessListHead);
        return newhead;
    }
};