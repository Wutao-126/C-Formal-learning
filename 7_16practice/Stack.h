#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int STDataType;
typedef struct Stack Stack;
struct Stack
{
	STDataType* arr;
	int top;
	int capacity;
};


void StackInit(Stack*ps);
void StackDestory(Stack* ps);

//栈顶插入删除数据
//入栈
void StackPush(Stack* ps, STDataType x);
//出栈
void StackPop(Stack* ps);

STDataType StackTop(Stack* ps);

int StackSize(Stack* ps);
bool StackEmpty(Stack* ps);