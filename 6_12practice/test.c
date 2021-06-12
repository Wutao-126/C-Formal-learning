# define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            if (i == 0 || i == n - 1)
//            {
//                for (j = 0; j < n; j++)
//                {
//                    printf("* ");
//                }
//                printf("\n");
//            }
//            else
//            {
//                printf("* ");
//                for (j = 0; j < n - 2; j++)
//                {
//                    printf("  ");
//                }
//                printf("* \n");
//            }
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i ; j++)
//            {
//                if (j == 0 || j == i || i == n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        switch (n)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    float arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%f", &arr[i]);
//    }
//    int max = 0;
//    int min = 0;
//    for (i = 1; i < 7; i++)
//    {
//        if (arr[i] > arr[max])
//        {
//            max = i;
//        }
//        if (arr[i] < arr[min])
//        {
//            min = i;
//        }
//    }
//    float sum = 0;
//    for (i = 0; i < 7; i++)
//    {
//        sum += arr[i];
//    }
//    sum = sum - arr[max] - arr[min];
//    printf("%.2f\n", sum / 5);
//    return 0;
//}



#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[51] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        if (m < arr[i])
        {
            memmove(arr + i+1, arr + i, (n-i) * 4);
            arr[i] = m;
            break;
        }
    }
    if (i == n)
    {
        arr[n] = m;
    }
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}