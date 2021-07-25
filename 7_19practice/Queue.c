#include"queue.h"

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
	pq->head = NULL;
	pq->tail = NULL;
}


void QueuePrint(Queue* pq)
{
	assert(pq);
	while (!QueueEmpty(pq))
	{
		printf("%d ", QueueFront(pq));
		QueuePop(pq);
	}
	printf("\n");
}

//队尾入
void QueuePush(Queue* pq, QNDatatype x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->val = x;
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

//队头出
void QueuePop(Queue* pq)
{
	assert(pq);
	assert(pq->head != NULL);
	QNode* next = pq->head->next;
	free(pq->head);
	pq->head = next;
	if (pq->head == NULL)
	{
		pq->tail = NULL; 
	}
}

QNDatatype QueueFront(Queue* pq)
{
	assert(pq);
	assert(pq->head);
	return pq->head->val;
}
QNDatatype QueueBack(Queue* pq)
{
	assert(pq);
	assert(pq->tail);
	return pq->tail->val;
}

int QueueSize(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	int size = 0;
	while (cur)
	{
		size++;
		cur = cur->next;
	}
	return size;
}
bool QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->head == NULL;
}