#include<stdio.h>
#include<math.h>





struct Stu
{
	char name[20];
	int age;
};

struct Stu s;


//void main()
//{
//	char* szStr = "abcde";
//	szStr += 2;
//	printf("%lu\n", szStr);
//	return;
//}





//int Pow(int x, int y)
//{
//	int ret = 1;
//	while (y--)
//	{
//		ret *= x;
//	}
//	return ret;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	printf("%d", Pow(m, n));
//	return 0;
//}


//int main()
//{
//	unsigned short sht = 0;
//	sht--;
//	printf("%d", sht);
//	return 0;
//}

//int main()
//{
//	// 1100100
//	//11001000
////   100101100
//	return 0;
//}


//struct ListNode* FindMinPos(ListNode* head)
//{
//	ListNode* slow = head;
//	ListNode* fast = head;
//	while (fast && fast->next)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//	}
//	return slow;
//}







//int main()
//{
//	unsigned int a = 0xFFFFFFF7;
//	unsigned char i = (unsigned char)a;
//	char* b = (char*)&a;
//	printf("%08x,%08x", i, *b);
//	return 0;
//}


//int main()
//{
//	int x = 1, y = 012;
//	printf("%d", y * x++);
//	return 0;
//}

//-20:10000000000000000000000000010100
//    11111111111111111111111111101011
//    11111111111111111111111111101100
// 10:00000000000000000000000000001010
//    11111111111111111111111111110110
//    11111111111111111111111111110101
//    10000000000000000000000000001010
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000
//	//11111111111111111111111110000000
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	union a
//	{
//		char c;
//		int s;
//		
//	}a;
//	a.s = 1;
//	printf("%d", a.c);
//	/*int a = 1;
//	char* b = (char*)&a;
//	printf("%d", *b);*/
//	return 0;
//}

//int countPrimes(int n) {
//    if (n < 3)
//    {
//        return 0;
//    }
//
//    int i = 0;
//    int count = 0;
//    for (i = 2; i < n; i++)
//    {
//        int j = 0;
//        for (j = 2; j <= sqrt(i); j++)
//        {
//            if (i % j == 0)
//            {
//                break;
//            }
//        }
//        if (j > sqrt(i))
//        {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", countPrimes(n));
//    return 0;
//}