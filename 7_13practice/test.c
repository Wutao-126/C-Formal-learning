//147. 对链表进行插入排序
//从第一个元素开始，该链表可以被认为已经部分排序。
//每次迭代时，从输入数据中移除一个元素，并原地将其插入到已排好序的链表中。
//输入: 4->2->1->3
//输出 : 1->2->3->4

//插入排序算法：

//插入排序是迭代的，每次只移动一个元素，直到所有元素可以形成一个有序的输出列表。
//每次迭代中，插入排序只从输入数据中移除一个待排序的元素，找到它在序列中适当的位置，并将其插入。
//重复直到所有输入数据插入完为止。



//思路：先将原链表的第一个结点单独取处，看成是一个有序结点，并将它的next置为NULL
//      再将原链表剩下的结点依次取出，与有序链表的值比较
//      如果比有序链表结点的val小，就插在该结点的前面
//      如果有序链表中的所有结点都比它小，则插入到该链表的后面(尾插时一定要注意将插入结点的next置为NULL，防止链表出现环)
//      重复上述步骤直到原链表为空

//4->NULL    2->1->3

//2->4->NULL    1->3

//1->2->4->NULL    3

//1->2->3->4->NULL





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* insertionSortList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode* sorthead = head;
    struct ListNode* cur = head->next;
    sorthead->next = NULL;
    while (cur)
    {
        struct ListNode* next = cur->next;

        //把cur插入到sorthead链表中，并保持有序
        if (cur->val <= sorthead->val)
        {
            //头插
            cur->next = sorthead;
            sorthead = cur;
        }
        else
        {
            
            struct ListNode* sortcur = sorthead->next;
            struct ListNode* sortprev = sorthead;
            while (sortcur)
            {
                //中间插
                if (cur->val < sortcur->val)
                {
                    sortprev->next = cur;
                    cur->next = sortcur;
                    break;
                }
                else
                {
                    sortprev = sortcur;
                    sortcur = sortcur->next;
                }
            }
            //尾插
            if (sortcur == NULL)
            {
                sortprev->next = cur;
                cur->next = NULL;//将该结点的next置为NULL，防止出现循环(因为该链表的next仍然指向原链表中该节点的下一个节点)
            }
        }
        cur = next;
    }
    return sorthead;
}







//82. 删除排序链表中的重复元素 II
//存在一个按升序排列的链表，给你这个链表的头节点 head,请你删除链表中所有存在数字重复情况的节点，
//只保留原始链表中没有重复出现 的数字。
//返回同样按升序排列的结果链表。

//输入：head = [1,2,3,3,4,4,5]
//输出：[1, 2, 5]



//思路：创建三个指针，分别保存前一个位置(prev)，当前位置(cur)，下一个位置的地址(next)
//      将cur->val与next->val比较
//      如果相等，则将next向后移动,直到二者不再相等，然后free掉cur，cur也向前移动，直到cur=next
//      如果不相等，则直接将每个位置向后移动一次
//      重复上述步骤直到next为NULL
//prev  cur  next 
//      1  ->  2  ->  3  ->  3  ->  4  ->  4  ->  5
// 
//      prev  cur   next
//      1  ->  2  ->  3  ->  3  ->  4  ->  4  ->  5
// 
//            prev  cur   next
//      1  ->  2  ->  3  ->  3  ->  4  ->  4  ->  5
// 
//            prev  cur            next
//      1  ->  2  ->  3  ->  3  ->  4  ->  4  ->  5
//                                 cur  
//            prev     free(cur)   next
//      1  ->  2  ->  3  ->  3  ->  4  ->  4  ->  5(free)
// 
//            prev    cur    next
//      1  ->  2  ->   4  ->  4  ->  5
// 
//           prev     cur          next
//      1  ->  2  ->   4  ->  4  ->  5
//                    cur
//            prev    next   
//      1  ->  2   ->  5
// 
// 
//            prev    cur   next
//      1  ->  2   ->  5
// 
// 
// 
// 
// 
//      注意其中的特殊用例：{1,1,1,2,3},{2,3,1,1,1}
// 
//      第一种特殊情况中prev为NULL
//      在将循环结束后需要将head置为next，因为原来head的位置被释放掉了
// 
//      第二种特殊情况中next在内层循环中为NULL
//      而这时循环应该被结束掉，所以应该在内层循环的条件中加上next!=NULL
//   



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode* prev = NULL;
    struct ListNode* cur = head;
    struct ListNode* next = cur->next;
    while (next)
    {
        //不相等，则直接将每个位置向后移动一次
        if (cur->val != next->val)
        {
            prev = cur;
            cur = next;
            next = next->next;
        }
        else
        {
            //第二种特殊情况中next在内层循环中为NULL
           // 而这时循环应该被结束掉，所以应该在内层循环的条件中加上next!=NULL
            while (next != NULL && cur->val == next->val)
            {
                next = next->next;
            }
            if (prev)
            {
                prev->next = next;//将prev->next指向next跳过中间free的部分
            }
            else
            {
                head = next;//第一种特殊情况中prev为NULL
                            //在将循环结束后需要将head置为next，因为原来head的位置被释放掉了
            }
            //释放cur
            while (cur != next)
            {
                struct ListNode* del = cur;
                cur = cur->next;
                free(del);
            }
            if (next != NULL)//第二种特殊情况时 next=NULL,此时循环还没有结束，如果不加if条件这里就会出现空指针访问
                next = next->next;
        }

    }
    return head;
}