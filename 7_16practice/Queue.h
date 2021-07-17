#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int QNDatatype;
typedef struct QueueNode
{
	QNDatatype val;
	struct QueueNode* next;
}QNode;


typedef struct Queue
{
	QNode* head;
	QNode* tail;
}Queue;

void QueueInit(Queue*pq);
void QueueDestory(Queue* pq);
void QueuePrint(Queue* pq);

//��β��
void QueuePush(Queue* pq, QNDatatype x);

//��ͷ��
void QueuePop(Queue* pq);

QNDatatype QueueFront(Queue* pq);
QNDatatype QueueBack(Queue* pq);

int QueueSize(Queue* pq);
bool QueueEmpty(Queue* pq);