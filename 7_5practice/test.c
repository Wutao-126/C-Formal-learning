# define _CRT_SECURE_NO_WARNINGS
//剑指 Offer 24. 反转链表
//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
//输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL

//方法一：三指针反转
//基本思路：先创建三个指针变量n1,n2,n3，分别指向空，第一个位置，第二个位置；
//          然后将n2指向n1,这样就实现了第一个位置指向了空；
//          然后将指针迭代，即n1=n2,n2=n3,n3=n3->next;
//          然后继续将n2指向n1，第二个位置就指向了第一个位置；
//          重复上述步骤直到n2为空，即n1为最后一个位置；
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
    if (head == NULL || head->next == NULL)//(切记！看到箭头需判断箭头左边的指针是否为空)
    {
        return head;
    }
    struct ListNode* n1 = NULL;
    struct ListNode* n2 = head;
    struct ListNode* n3 = head->next;
    while (n2)
    {
        //反转
        n2->next = n1;
        //迭代
        n1 = n2;
        n2 = n3;
        if (n3)
            n3 = n3->next;//需判断那n3是否为空，若为空则不再迭代
    }
    return n1;//需返回头指针
}


//方法二：头插法
//基本思路：先创建新的头newhead并初始化为空，再创建cur指针保存第一个位置，再创建next指针保存下一个位置不然下一个位置会丢失
//          然后将cur头插到newhead的前面即cur->next = newhead
//          然后改变头的位置将newhead置为cur
//          然后将cur置为next
//          然后将next置为next->next
//          最后重复上述步骤，当cur为空时循环结束
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



//203. 移除链表元素
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
//输入：head = [1,2,6,3,4,5,6], val = 6
//输出：[1, 2, 3, 4, 5]

//基本思路：创建两个指针变量，一个用来保存位置(prev)，一个用来判断是否为去除的值(cur)
//          然后判断每一个元素是否时去除值
//          如果不是将prev置为cur，cur置为cur->next
//          否则将prev置为cur->next,再释放掉cur的空间，再将cur置为prev->next
//          重复上述过程，直到cur为空




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
            if (cur == head)//如果第一个元素就是要去除的元素
            {
                head = cur->next;//将head置为下一个位置
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








//876. 链表的中间结点
//给定一个头结点为 head 的非空单链表，返回链表的中间结点。
//如果有两个中间结点，则返回第二个中间结点。
//输入：[1,2,3,4,5]
//输出：此列表中的结点 3 (序列化形式：[3, 4, 5])


//基本思路：创建快慢指针，
//          快指针一次走两步，慢指针一次走一步，
//          当快指针走完时(奇数走到fast->next = NULL,偶数走到 fast = NULL)，慢指针为中间位置

//奇数个
//fast
//slow
// 1  ->  2->  3->   4->  5-> NULL

//           fast
//      slow
// 1  ->  2->  3->   4->  5-> NULL

//                      fast
//           slow
// 1  ->  2->  3->   4->  5-> NULL


//偶数个

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
    while (fast && fast->next)//奇数个时快指针只需走到fast->next = NULL,偶数个时，快指针需要走到NULL
    {                         //所以当二者有一个为空时循环结束
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}










//剑指 Offer 22. 链表中倒数第k个节点
//输入一个链表，输出该链表中倒数第k个节点。为了符合大多数人的习惯，本题从1开始计数，即链表的尾节点是倒数第1个节点。
//例如，一个链表有 6 个节点，从头节点开始，它们的值依次是 1、2、3、4、5、6。这个链表的倒数第 3 个节点是值为 4 的节点。
//给定一个链表: 1->2->3->4->5, 和 k = 2.
//返回链表 4->5.

//基本思路：先创建快慢指针，然后将快指针向前移动k次，最后快慢指针再一起移动，直到快指针为空

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