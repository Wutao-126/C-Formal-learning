# define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100] = { 0 };
//
//    int i = 0;
//    int j = 0;
//    for (i = 2; i <= n; i++)
//    {
//        arr[j] = i;
//        j++;
//    }
//    for (i = 2; i <= n; i++)
//    {
//
//        for (j = 0; j < n - 1; j++)
//        {
//            if (arr[j] > i)
//            {
//                if (arr[j] % i == 0)
//                    arr[j] = 0;
//            }
//        }
//    }
//    int count = 0;
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] == 0)
//            count++;
//        else
//            printf("%d ", arr[i]);
//    }
//    printf("\n");
//    printf("%d",count);
//        return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    scanf("%d%d", &m, &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    int count = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//                count++;
//        }
//    }
//    double same = (double)count / (m * n) * 100;
//    printf("%.2lf", same);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int j = 0;
//        for (j = i; j != 0; j /= 10)
//        {
//            if (j%10 == 9)
//            {
//                count++;
//                break;
//            }
//        }
//    }
//    printf("%d", count);
//    return 0;
//}

//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int m = 0;
//    scanf("%d", &m);
//    if (arr[n - 1] < m)
//    {
//        arr[n] = m;
//    }
//    else
//    {
//        for (i = 0; i < n; i++)
//        {
//            if (arr[i] > m)
//            {
//                memmove(arr + i + 1, arr + i, (n - i) * 4);
//                arr[i] = m;
//                break;
//            }
//        }
//    }
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[10] = { 0 };
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}



#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n-2; i++)
    {
        if ((arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2]) || (arr[i]<arr[i + 1] && arr[i + 1]>arr[i + 2]))
        {
            printf("unsorted\n");
            break;
        }
    }
    if (i == n-2)
    {
        printf("sorted\n");
    }
    return 0;
}