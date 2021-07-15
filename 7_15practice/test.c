//2. 两数相加


//给你两个 非空 的链表，表示两个非负的整数.它们每位数字都是按照逆序的方式存储的，并且每个节点只能存储一位数字。
//请你将两个数相加，并以相同形式返回一个表示和的链表。
//你可以假设除了数字 0 之外，这两个数都不会以 0 开头

//输入：l1 = [2, 4, 3], l2 = [5, 6, 4]
//输出：[7, 0, 8]
//解释：342 + 465 = 807.


//思路:（因为我们不知道两个链表的长度）动态创建新链表，每次创建一个结点
//      从两个链表的第一个结点开始，将两个结点的每一个值相加
//      相加的结果（sum）赋给新链表的对应结点，如果sum>=10,将sum%10,并将下一个结点的val+1(这里我们可以使用一个进位变量flag)
//      直到两个链表都为空
//      
//      注意：可能在最后结束时还会进一位，例如[9,9,9],[1,0,0,9]
//      这里我们需要在循环结束时再创建一个结点用来保存最后一次进位的值


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
          int sum = (cur1 == NULL ? 0 : cur1->val) + (cur2 == NULL ? 0 : cur2->val) + flag;//需要判断结点是否为NULL
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
          if (cur1)//注意：判断
              cur1 = cur1->next;
          if (cur2)
              cur2 = cur2->next;
          if (cur1 || cur2)//如果两个结点都为空则不再创建结点
          {
              tail->next = (ListNode*)malloc(sizeof(ListNode));
              tail = tail->next;
          }

      }
      if (flag == 1)//如果flag未被清0，则说明最后还需一次进位
      {             //则还需要创建一个结点
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