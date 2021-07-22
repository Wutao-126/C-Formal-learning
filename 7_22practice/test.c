#include<stdio.h>
#include<string.h>
#include<math.h>


int is_prime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


void fun(int* num)
{
	(*num)++;
}
int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		int ret = is_leap_year(y);
//		if (ret == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}
//int BinaryFind(int arr[], int n, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}





//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = BinaryFind(arr, 7, sz);
//	ret == -1 ? printf("找不到") : printf("找到了下标是:%d", ret);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[20];
//	char arr2[] = "Hello world!";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	memset(arr2, 'x', 12);
//	printf("%s\n", arr2);
//	return 0;
//}


//void swap(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a, &b);
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}


void mul_print(int n)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d ",j,i, i * j);
		}
		printf("\n");
	}
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mul_print(n);
//	return 0;
//}



//9. 回文数
//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。

//思路：将x放进数组中，然后将数组的第一个元素和最后一个元素依次向中间相比
//      如果前后不相等则返回false，如果一直没有返回直到循环结束，则返回true


//bool isPalindrome(int x) {
//	if (x < 0)
//	{
//		return false;
//	}
//	int n = 0;
//	int arr[20] = { 0 };
//	while (x)
//	{
//		int tmp = x % 10;
//		arr[n] = tmp;
//		n++;
//		x /= 10;
//	}
//	n -= 1;
//	int i = 0;
//	while (i < n)
//	{
//		if (arr[i] != arr[n])
//		{
//			return false;
//		}
//		i++;
//		n--;
//	}
//	return true;
//}



int romanToInt(char* s) {
    int sum = 0;
    int i = 0;
    int flag = 0;
    while (*(s + i))
    {
        switch (*(s + i))
        {
        case 'I':
        {
            sum += 1;
            flag = 1;
            break;
        }
        case 'V':
        {
            if (flag == 1)
                sum += 4;
            else
                sum += 5;
            flag = 5;
            break;
        }
        case 'X':
        {
            if (flag == 1)
                sum += 9;
            else
                sum += 10;
            flag = 10;
            break;
        }
        case 'L':
        {
            if (flag == 10)
                sum += 40;
            else
                sum += 50;
            flag = 50;
            break;
        }
        case 'C':
        {
            if (flag == 10)
                sum += 90;
            else
                sum += 100;
            flag = 100;
            break;
        }
        case 'D':
        {
            if (flag == 100)
                sum += 400;
            else
                sum += 500;
            flag = 500;
            break;
        }
        case 'M':
        {
            if (flag == 100)
                sum += 900;
            else
                sum += 1000;
            flag = 1000;
            break;
        }
        default:
            break;
        }
        i++;
    }
    return sum;
}

typedef struct ListNode ListNode;
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
    int lenA = 0, lenB = 0;
    ListNode* curA = headA, * curB = headB;
    while (curA)
    {
        lenA++;
        curA = curA->next;
    }
    while (curB)
    {
        lenB++;
        curB = curB->next;
    }
    if (lenA > lenB)
    {
        int len = lenA - lenB;
        while (len)
        {
            headA = headA->next;
            len--;
        }
    }
    else
    {
        int len = lenB - lenA;
        while (len)
        {
            headB = headB->next;
            len--;
        }
    }
    while (headA)
    {
        if (headA == headB)
        {
            return headA;
        }
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}