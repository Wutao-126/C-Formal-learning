# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	/*char str[10];
//	str[2] = "string";*/
//	int a = 10;
//	a += a *= a -= a / 3;
//	printf("%d", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char str[100] = { 0 };
//	gets(str);
//	int i = 0;
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] == 32)
//		{
//			printf("%%%d",20);
//		}
//		else
//		{
//			printf("%c", str[i]);
//		}
//	}
//	return 0;
//}

//��ָ Offer 18. ɾ������Ľڵ�
//�������������ͷָ���һ��Ҫɾ���Ľڵ��ֵ������һ������ɾ���ýڵ㡣
//����ɾ����������ͷ�ڵ㡣

//����: head = [4,5,1,9], val = 5
//���: [4, 1, 9]

//����˼·������ָ�뷨
//         ���ȴ�������λ��ͷָ��֮ǰ��ָ�룬һ����������ͷָ�룬һ����������ɾ��λ�õ�ǰһ��λ�õĵ�ַ
//         Ȼ��headָ�����������������жϣ��������ɾ��ֵ����һ��λ�õ�nextָ��ɾ��λ�õ�next�����򲻸ı�ָ��
//         �ظ���������ֱ��headΪ��
//         ע��������һ��Ϊɾ��ֵ������һ��λ�õ�nextΪ�գ�����Ҫ��head��Ϊ��



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteNode(struct ListNode* head, int val) {
    struct ListNode* newhead = NULL, * cur = NULL;
    newhead = cur = (struct ListNode*)malloc(sizeof(struct ListNode));
    while (head)
    {
        if (head->val == val)
        {
            cur->next = head->next;
            cur = cur->next;
            free(head);
            if (cur == NULL)
                head = NULL;
            else
                head = cur->next;
        }
        else
        {
            cur->next = head;
            cur = cur->next;
            head = head->next;
        }
    }
    return newhead->next;
}