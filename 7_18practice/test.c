//225. 用队列实现栈
//请你仅使用两个队列实现一个后入先出（LIFO）的栈，并支持普通栈的全部四种操作（push、top、pop 和 empty）。
//实现 MyStack 类：

//void push(int x) 将元素 x 压入栈顶。
//int pop() 移除并返回栈顶元素。
//int top() 返回栈顶元素。
//boolean empty() 如果栈是空的，返回 true ；否则，返回 false 。
//注意：

//你只能使用队列的基本操作 —— 也就是 push to back、peek / pop from front、size 和 is empty 这些操作。
//你所使用的语言也许不支持队列。 你可以使用 list （列表）或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。


//1 <= x <= 9
//最多调用100 次 push、pop、top 和 empty
//每次调用 pop 和 top 都保证栈不为空


//思路：创建两个队列，根据题目要求，我们要实现栈，即现进后出，后进先出，而队列为先进先出
//      我们可以用一个队列来存放Push的元素
//      Pop时先将这个队列中除最后一个值外的其他值Push到另一个空队列中 //1
//      这样我们就得到了队列的最后一个值，也就是栈中先出去的值        //2
//      如果还需要Pop，则重复上述1，2步骤即可。直到两个队列中都为空时停止


typedef int QDataType;
typedef struct QueueNode
{
	QDataType data;
	struct QueueNode* next;
}QNode;


typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;


void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = pq->tail = NULL;
}

void QueueDestory(Queue* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}

	pq->head = pq->tail = NULL;
}

// 队尾入
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	newnode->data = x;
	newnode->next = NULL;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
}

// 队头出
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	// 1、一个
	// 2、多个
	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
}


QDataType QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	return pq->head->data;
}

QDataType QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->head);

	return pq->tail->data;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	int size = 0;
	QNode* cur = pq->head;
	while (cur)
	{
		++size;
		cur = cur->next;
	}

	return size;
}

bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}


typedef struct {

	Queue q1;//创建两个队列
	Queue q2;
} MyStack;

/** Initialize your data structure here. */

MyStack* myStackCreate() {
	MyStack* ps = (MyStack*)malloc(sizeof(MyStack));
	if (ps == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	QueueInit(&ps->q1);
	QueueInit(&ps->q2);

	return ps;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
	if (!QueueEmpty(&obj->q1))//将Push的值传入不为空的队列中，若都为空则随便传入一个
	{
		QueuePush(&obj->q1, x);
	}
	else
	{
		QueuePush(&obj->q2, x);
	}
}

/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
	Queue* emptyQ = &obj->q1;
	Queue* nonemptyQ = &obj->q2;
	if (!QueueEmpty(&obj->q1))//需判断哪一个队列为空
	{
		emptyQ = &obj->q2;
		nonemptyQ = &obj->q1;
	}
	while (QueueSize(nonemptyQ) > 1)
	{
		QueuePush(emptyQ, QueueFront(nonemptyQ));
		QueuePop(nonemptyQ);//每次Push一个值，都需要将这个值从这个队列中Pop掉
	}
	int top = QueueFront(nonemptyQ);//需要返回栈顶值
	QueuePop(nonemptyQ);
	return top;
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
	if (!QueueEmpty(&obj->q1))
	{
		return QueueBack(&obj->q1);//栈顶值为非空队列的最后一个值
	}
	else
	{
		return QueueBack(&obj->q2);
	}
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);//两个队列都不为空时栈才为空
}

void myStackFree(MyStack* obj) {
	QueueDestory(&obj->q1);//需要free掉创建的两个队列
	QueueDestory(&obj->q2);
	free(obj);//还需free掉创建的结构体

}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);

 * int param_2 = myStackPop(obj);

 * int param_3 = myStackTop(obj);

 * bool param_4 = myStackEmpty(obj);

 * myStackFree(obj);
*/








//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int x, y;
//	x = 0;
//	while (x < 10)
//	{
//		y = x * x;
//		printf("%d\t%d\n", x, y);
//		x += 1;
//	}
//	return 0;
//}

