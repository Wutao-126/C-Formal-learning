#include"Stack.h"

void StackInit(Stack* ps)
{
	assert(ps);
	ps->arr = (STDataType*)malloc(sizeof(STDataType)*4);
	if (ps->arr == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;
	//��ʼ��-1Ϊ��
	ps->top = -1;
}

void StackDestory(Stack* ps)
{
	assert(ps);
	ps->arr = NULL;
	ps->capacity = 0;
	ps->top = -1;
}


//ջ������ɾ������
//��ջ
void StackPush(Stack* ps, STDataType x)
{
	assert(ps);
	if (ps->capacity == ps->top)
	{
		STDataType* tmp = (STDataType*)realloc(ps->arr, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->arr = tmp;
		ps->capacity *= 2;
	}

	ps->top++;
	ps->arr[ps->top] = x;
}

//��ջ
void StackPop(Stack* ps)
{
	assert(ps);
	//ջ������˻ᱨ��
	assert(ps->top > -1);
	ps->top--;
}

STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->top > -1);
	return ps->arr[ps->top];
}

int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top + 1;
}

bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == -1;
}