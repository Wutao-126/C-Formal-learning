//2. �������


//�������� �ǿ� ��������ʾ�����Ǹ�������.����ÿλ���ֶ��ǰ�������ķ�ʽ�洢�ģ�����ÿ���ڵ�ֻ�ܴ洢һλ���֡�
//���㽫��������ӣ�������ͬ��ʽ����һ����ʾ�͵�����
//����Լ���������� 0 ֮�⣬���������������� 0 ��ͷ

//���룺l1 = [2, 4, 3], l2 = [5, 6, 4]
//�����[7, 0, 8]
//���ͣ�342 + 465 = 807.


//˼·:����Ϊ���ǲ�֪����������ĳ��ȣ���̬����������ÿ�δ���һ�����
//      ����������ĵ�һ����㿪ʼ������������ÿһ��ֵ���
//      ��ӵĽ����sum������������Ķ�Ӧ��㣬���sum>=10,��sum%10,������һ������val+1(�������ǿ���ʹ��һ����λ����flag)
//      ֱ����������Ϊ��
//      
//      ע�⣺������������ʱ�����һλ������[9,9,9],[1,0,0,9]
//      ����������Ҫ��ѭ������ʱ�ٴ���һ����������������һ�ν�λ��ֵ


#include<stdio.h>
#include<stdlib.h>
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 

  typedef struct ListNode ListNode;
  struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
      ListNode* tail = (ListNode*)malloc(sizeof(ListNode));
      tail->next = NULL;
      tail->val = 0;
      ListNode* head = tail;
      ListNode* cur1 = l1;
      ListNode* cur2 = l2;
      int flag = 0;
      while (cur1 || cur2)
      {
          int sum = (cur1 == NULL ? 0 : cur1->val) + (cur2 == NULL ? 0 : cur2->val) + flag;//��Ҫ�жϽ���Ƿ�ΪNULL
          flag = 0;
          if (sum >= 10)
          {
              tail->val = sum % 10;
              flag = 1;
          }
          else
          {
              tail->val = sum;
              flag = 0;
          }
          if (cur1)//ע�⣺�ж�
              cur1 = cur1->next;
          if (cur2)
              cur2 = cur2->next;
          if (cur1 || cur2)//���������㶼Ϊ�����ٴ������
          {
              tail->next = (ListNode*)malloc(sizeof(ListNode));
              tail = tail->next;
          }

      }
      if (flag == 1)//���flagδ����0����˵�������һ�ν�λ
      {             //����Ҫ����һ�����
          tail->next = (ListNode*)malloc(sizeof(ListNode));
          tail = tail->next;
          tail->val = 1;
      }
      tail->next = NULL;
      return head;
  }


int main(){

    ListNode* n1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n2 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* n3 = (ListNode*)malloc(sizeof(ListNode));
    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    n1->val = 2;
    n2->val = 4;
    n3->val = 3;

    ListNode* s1 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* s2 = (ListNode*)malloc(sizeof(ListNode));
    ListNode* s3 = (ListNode*)malloc(sizeof(ListNode));
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    s1->val = 5;
    s2->val = 6;
    s3->val = 4;

    ListNode*newhead = addTwoNumbers(n1, s1);
    while (newhead)
    {
        printf("%d->", newhead->val);
        newhead = newhead->next;
    }
    return 0;
}