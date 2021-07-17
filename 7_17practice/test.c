//20. 有效的括号
// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
// 有效字符串需满足：
//                  左括号必须用相同类型的右括号闭合。
//                  左括号必须以正确的顺序闭合。
// 
// 提示：
//1 <= s.length <= 104
//s 仅由括号 '()[]{}' 组成
//
// 
// 
// 
//输入：s = "{[]}"
//输出：true


//思路：根据题目，我们可将括号分为两部分放置，且放置的顺序与原用例相同
//      左括号为一部分，右括号为另一部分
//      而根据括号的对应，当我们取到右括号时，再另一部分的对应位置必须为对应的左括号才行
//      对此我们根据栈的特点，先进后出，后进先出，就可以很容易做出这道题
//      
//      首先我们需要创建一个栈
//      然后将左括号放进栈里，当遇到右括号时，将栈头取出，如果与之对应则进行下一个
//      否则销毁栈并且返回false
//      重复上述步骤，直到字符串为空




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

//栈顶插入删除数据
//入栈
void StackPush(Stack* ps, STDataType x);
//出栈
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
    //初始化0为空
    ps->top = 0;
}

void StackDestory(Stack* ps)
{
    assert(ps);
    ps->arr = NULL;
    ps->capacity = 0;
    ps->top = 0;
}


//栈顶插入删除数据
//入栈
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

//出栈
void StackPop(Stack* ps)
{
    assert(ps);
    //栈如果空了会报错
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
            if (StackEmpty(&st))//如果取到右括号时，栈中元素为空，则说明括号有多余则可直接判断
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
    bool ret = StackEmpty(&st);//如果栈中不为空，则说明左括号有多余，结果会返回假
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