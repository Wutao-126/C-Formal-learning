# define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int a, b, c;
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 0; i < n; i++)
//    {
//        float average = 0;
//        scanf("%d%d%d", &a, &b, &c);
//        average = (a + b + c) / 3;
//        if (average < 60)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}



//#include<stdio.h>
//int max3(int a, int b, int c)
//{
//    return (a > b ? a : b) > c ? (a > b ? a : b) : c;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    float m = (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c));
//    printf("%.2f", m);
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int arr[100] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != arr[i - 1])
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}



#include<stdio.h>
#define PI 3.14
int main()
{
    int x, y;
    int r;
    int a;
    scanf("%d%d", &x, &y);
    scanf("%d", &r);
    scanf("%d", &a);
    printf("%d\n%0lf\n%d", x * y, r * r * PI, a * a);
    return 0;
}