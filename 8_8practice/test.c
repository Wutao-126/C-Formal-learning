#include<stdio.h>

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}

//1137. 第 N 个泰波那契数

//
//泰波那契序列 Tn 定义如下：

//T0 = 0, T1 = 1, T2 = 1, 且在 n >= 0 的条件下 Tn + 3 = Tn + Tn + 1 + Tn + 2

//给你整数 n，请返回第 n 个泰波那契数 Tn 的值。

//思路：与斐波那契数类似，注意这里n从0开始
//int tribonacci(int n) {
//    int a = 0;
//    int b = 1;
//    int c = 1;
//    int d = 0;
//    if (n == 0)
//    {
//        return a;
//    }
//    if (n > 0 && n < 3)
//    {
//        return b;
//    }
//    while (n >= 3)
//    {
//        d = a + b + c;
//        a = b;
//        b = c;
//        c = d;
//        n--;
//    }
//    return d;
//}




//202. 快乐数
// 
//编写一个算法来判断一个数 n 是不是快乐数。

//「快乐数」定义为：

//对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和。
//然后重复这个过程直到这个数变为 1，也可能是 无限循环 但始终变不到 1。
//如果 可以变为  1，那么这个数就是快乐数。
//如果 n 是快乐数就返回 true ；不是，则返回 false 。
//


//思路：暴力解法

//bool isHappy(int n) {
//
//    int i = 0;
//    for (i = 0; i < 10; i++)//至于这里循环多少次，根据测试用例而定
//    {
//        int sum = 0;
//        while (n)//直到n=0
//        {
//            sum += (n % 10) * (n % 10);//将每一位的平方加到sum上
//            n /= 10;//求下一位
//        }
//        n = sum;
//        if (n == 1)//如果n=1返回真
//        {
//            return true;
//        }
//    }
//    return false;
//}


//237. 删除链表中的节点
//请编写一个函数，使其可以删除某个链表中给定的（非末尾）节点。传入函数的唯一参数为 要被删除的节点 。

//思路：注意题目要求，参数只有被删除结点，没有头节点！！

//这道题细思极恐：如何让自己在世界上消失，但又不死？ —— 将自己完全变成另一个人，再杀了那个人就行了。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void deleteNode(struct ListNode* node) {
    struct ListNode* next = node->next;//找到要变成的那个人
    node->val = next->val;//将自己变成他
    node->next = next->next;//杀掉他
    free(next);
    next = NULL;
}