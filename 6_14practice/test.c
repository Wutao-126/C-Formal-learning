# define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//int main()
//{
//	printf("%d", 5 % -4);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int m = 0;
//    int count = 0;
//    scanf("%d", &m);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] == m)
//        {
//            count++;
//            int j = 0;
//            for (j = i; j < n; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//        }
//    }
//    for (i = 0; i < n - count; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[1000] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[j] == arr[i])
//                arr[j] = 0;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int i = 0;
//    int arr1[200] = { 0 };
//    int arr2[100] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        arr1[n + i] = arr2[i];
//    }
//    for (i = 0; i < m + n - 1; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m + n - i - 1; j++)
//        {
//            if (arr1[j] > arr1[j + 1])
//            {
//                int tmp = arr1[j];
//                arr1[j] = arr1[j + 1];
//                arr1[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    float arr[5][5] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//
//        float sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            sum += arr[i][j];
//            printf("%.1f ", arr[i][j]);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}



///*#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[15][15] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int x = 0;
//    int y = 0;
//    scanf("%d%d", &x, &y);
//    printf("%d", arr[x - 1][y - 1]);
//    */return 0;
//}


#include<stdio.h>
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d%d", &n, &m);
    int arr1[100] = { 0 };
    int arr2[10][10] = { 0 };
    int i = 0;
    int j = 0;
    int k = 0;
    for (i = 0; i < m * n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            arr2[i][j] = arr1[k];
            k++;
            printf("%d", arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}