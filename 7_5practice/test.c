# define _CRT_SECURE_NO_WARNINGS
//��ָ Offer 24. ��ת����
//����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣
//����: 1->2->3->4->5->NULL
//���: 5->4->3->2->1->NULL

//����һ����ָ�뷴ת
//����˼·���ȴ�������ָ�����n1,n2,n3���ֱ�ָ��գ���һ��λ�ã��ڶ���λ�ã�
//          Ȼ��n2ָ��n1,������ʵ���˵�һ��λ��ָ���˿գ�
//          Ȼ��ָ���������n1=n2,n2=n3,n3=n3->next;
//          Ȼ�������n2ָ��n1���ڶ���λ�þ�ָ���˵�һ��λ�ã�
//          �ظ���������ֱ��n2Ϊ�գ���n1Ϊ���һ��λ�ã�
//   n1 <-n2<-n3
//   NULL<-1<-2<-3<-4<-5-NULL

//       n1<-n2<-n3
//   NULL<-1<-2<-3<-4<-5-NULL

//          n1 <-n2<-n3
//   NULL<-1<-2<-3<-4<-5-NULL

//             n1 <-n2<-n3
//   NULL<-1<-2<-3<-4<-5-NULL

//                n1 <-n2<-n3
//   NULL<-1<-2<-3<-4<-5-NULL

//                    n1 <-n2<-n3
//   NULL<-1<-2<-3<-4<-5-NULL

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)//(�мǣ�������ͷ���жϼ�ͷ��ߵ�ָ���Ƿ�Ϊ��)
    {
        return head;
    }
    struct ListNode* n1 = NULL;
    struct ListNode* n2 = head;
    struct ListNode* n3 = head->next;
    while (n2)
    {
        //��ת
        n2->next = n1;
        //����
        n1 = n2;
        n2 = n3;
        if (n3)
            n3 = n3->next;//���ж���n3�Ƿ�Ϊ�գ���Ϊ�����ٵ���
    }
    return n1;//�践��ͷָ��
}


//��������ͷ�巨
//����˼·���ȴ����µ�ͷnewhead����ʼ��Ϊ�գ��ٴ���curָ�뱣���һ��λ�ã��ٴ���nextָ�뱣����һ��λ�ò�Ȼ��һ��λ�ûᶪʧ
//          Ȼ��curͷ�嵽newhead��ǰ�漴cur->next = newhead
//          Ȼ��ı�ͷ��λ�ý�newhead��Ϊcur
//          Ȼ��cur��Ϊnext
//          Ȼ��next��Ϊnext->next
//          ����ظ��������裬��curΪ��ʱѭ������
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* newhead = NULL;
    struct ListNode* cur = head;
    while (cur)
    {
        struct ListNode* next = head->next;
        cur->next = newhead;
        newhead = cur;
        cur = next;
        next = next->next;
    }
    return newhead;
}



//203. �Ƴ�����Ԫ��
//����һ�������ͷ�ڵ� head ��һ������ val ������ɾ���������������� Node.val == val �Ľڵ㣬������ �µ�ͷ�ڵ� ��
//���룺head = [1,2,6,3,4,5,6], val = 6
//�����[1, 2, 3, 4, 5]

//����˼·����������ָ�������һ����������λ��(prev)��һ�������ж��Ƿ�Ϊȥ����ֵ(cur)
//          Ȼ���ж�ÿһ��Ԫ���Ƿ�ʱȥ��ֵ
//          ������ǽ�prev��Ϊcur��cur��Ϊcur->next
//          ����prev��Ϊcur->next,���ͷŵ�cur�Ŀռ䣬�ٽ�cur��Ϊprev->next
//          �ظ��������̣�ֱ��curΪ��




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev = NULL, * cur = head;
    while (cur)
    {

        if (cur->val == val)
        {
            if (cur == head)//�����һ��Ԫ�ؾ���Ҫȥ����Ԫ��
            {
                head = cur->next;//��head��Ϊ��һ��λ��
                free(cur);
                cur = head;
            }
            else
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}








//876. ������м���
//����һ��ͷ���Ϊ head �ķǿյ���������������м��㡣
//����������м��㣬�򷵻صڶ����м��㡣
//���룺[1,2,3,4,5]
//��������б��еĽ�� 3 (���л���ʽ��[3, 4, 5])


//����˼·����������ָ�룬
//          ��ָ��һ������������ָ��һ����һ����
//          ����ָ������ʱ(�����ߵ�fast->next = NULL,ż���ߵ� fast = NULL)����ָ��Ϊ�м�λ��

//������
//fast
//slow
// 1  ->  2->  3->   4->  5-> NULL

//           fast
//      slow
// 1  ->  2->  3->   4->  5-> NULL

//                      fast
//           slow
// 1  ->  2->  3->   4->  5-> NULL


//ż����

//fast
//slow
// 1  ->  2->  3->   4->  5->  6-> NULL

//            fast
//       slow
// 1  ->  2->  3->   4->  5->  6-> NULL

//                       fast
//            slow
// 1  ->  2->  3->   4->  5->  6-> NULL

//                                 fast
//                  slow
// 1  ->  2->  3->   4->  5->  6-> NULL





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while (fast && fast->next)//������ʱ��ָ��ֻ���ߵ�fast->next = NULL,ż����ʱ����ָ����Ҫ�ߵ�NULL
    {                         //���Ե�������һ��Ϊ��ʱѭ������
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}










//��ָ Offer 22. �����е�����k���ڵ�
//����һ����������������е�����k���ڵ㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ������1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣
//���磬һ�������� 6 ���ڵ㣬��ͷ�ڵ㿪ʼ�����ǵ�ֵ������ 1��2��3��4��5��6���������ĵ����� 3 ���ڵ���ֵΪ 4 �Ľڵ㡣
//����һ������: 1->2->3->4->5, �� k = 2.
//�������� 4->5.

//����˼·���ȴ�������ָ�룬Ȼ�󽫿�ָ����ǰ�ƶ�k�Σ�������ָ����һ���ƶ���ֱ����ָ��Ϊ��

//fast
//slow
// 1  ->  2->  3->   4->  5-> NULL

//slow         fast
// 1  ->  2->  3->   4->  5-> NULL

//      slow        fast
// 1  ->  2->  3->   4->  5-> NULL

//            slow       fast
// 1  ->  2->  3->   4->  5-> NULL

//                  slow      fast
// 1  ->  2->  3->   4->  5-> NULL


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* getKthFromEnd(struct ListNode* head, int k) {
    if (head == NULL)
    {
        return head;
    }
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (k)
    {
        fast = fast->next;
        k--;
    }
    while (fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}