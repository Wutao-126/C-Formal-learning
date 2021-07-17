//20. ��Ч������
// ����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
// ��Ч�ַ��������㣺
//                  �����ű�������ͬ���͵������űպϡ�
//                  �����ű�������ȷ��˳��պϡ�
// 
// ��ʾ��
//1 <= s.length <= 104
//s �������� '()[]{}' ���
//
// 
// 
// 
//���룺s = "{[]}"
//�����true


//˼·��������Ŀ�����ǿɽ����ŷ�Ϊ�����ַ��ã��ҷ��õ�˳����ԭ������ͬ
//      ������Ϊһ���֣�������Ϊ��һ����
//      ���������ŵĶ�Ӧ��������ȡ��������ʱ������һ���ֵĶ�Ӧλ�ñ���Ϊ��Ӧ�������Ų���
//      �Դ����Ǹ���ջ���ص㣬�Ƚ����������ȳ����Ϳ��Ժ��������������
//      
//      ����������Ҫ����һ��ջ
//      Ȼ�������ŷŽ�ջ�������������ʱ����ջͷȡ���������֮��Ӧ�������һ��
//      ��������ջ���ҷ���false
//      �ظ��������裬ֱ���ַ���Ϊ��




#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef char STDataType;
typedef struct Stack Stack;
struct Stack
{
    STDataType* arr;
    int top;
    int capacity;
};


void StackInit(Stack* ps);
void StackDestory(Stack* ps);

//ջ������ɾ������
//��ջ
void StackPush(Stack* ps, STDataType x);
//��ջ
void StackPop(Stack* ps);

STDataType StackTop(Stack* ps);

int StackSize(Stack* ps);
bool StackEmpty(Stack* ps);


void StackInit(Stack* ps)
{
    assert(ps);
    ps->arr = (STDataType*)malloc(sizeof(STDataType) * 4);
    if (ps->arr == NULL)
    {
        printf("malloc fail\n");
        exit(-1);
    }

    ps->capacity = 4;
    //��ʼ��0Ϊ��
    ps->top = 0;
}

void StackDestory(Stack* ps)
{
    assert(ps);
    ps->arr = NULL;
    ps->capacity = 0;
    ps->top = 0;
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
    ps->arr[ps->top] = x;
    ps->top++;
}

//��ջ
void StackPop(Stack* ps)
{
    assert(ps);
    //ջ������˻ᱨ��
    assert(ps->top > 0);
    ps->top--;
}

STDataType StackTop(Stack* ps)
{
    assert(ps);
    assert(ps->top > 0);
    return ps->arr[ps->top-1];
}

int StackSize(Stack* ps)
{
    assert(ps);
    return ps->top + 1;
}

bool StackEmpty(Stack* ps)
{
    assert(ps);
    return ps->top == 0;
}

bool isValid(char* s) {
    Stack st;
    StackInit(&st);
    while (*s != '\0')
    {
        switch (*s)
        {
        case '[':
        case '{':
        case '(':
        {

            StackPush(&st, *s);
            s++;
            break;
        }
        case ']':
        case '}':
        case ')':
        {
            if (StackEmpty(&st))//���ȡ��������ʱ��ջ��Ԫ��Ϊ�գ���˵�������ж������ֱ���ж�
            {
                StackDestory(&st);
                return false;
            }
            char top = StackTop(&st);
            StackPop(&st);
            if ((*s == ']' && top != '[')
                || (*s == '}' && top != '{')
                || (*s == ')' && top != '('))
            {
                StackDestory(&st);
                return false;
            }
            else
            {
                s++;
            }
            break;
        }
        default:
            break;
        }
    }
    bool ret = StackEmpty(&st);//���ջ�в�Ϊ�գ���˵���������ж��࣬����᷵�ؼ�
    StackDestory(&st);
    return ret;
}

int main()
{
    char* str = "()";
    bool ret = isValid(str);
    return 0;
}


//int cmp_int(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//void FindNumMin_K(int* arr, int k,int sz)
//{
//    qsort(arr, sz, sizeof(int), cmp_int);
//    int i = 0;
//    for (i = 0; i < k; i++)
//    {
//        printf("%d ", *(arr + i));
//    }
//}
//
//
//int main()
//{
//    int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };
//    FindNumMin_K(arr, 5, 10);
//    return 0;
//}