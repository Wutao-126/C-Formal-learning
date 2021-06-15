# define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//            arr2[j][i] =arr1[i][j];
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr2[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    scanf("%d", &k);
//    for (i = 0; i < k; i++)
//    {
//        getchar();
//        scanf("%c%d%d",&t,&a, &b);
//        if (t == 'r')
//        {
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//       if(t=='c')
//        {
//            for (j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[30][30] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j <= i; j++)
//        {
//            if (i == j || j == 0)
//            {
//                arr[i][j] = 1;
//                printf("%5d", arr[i][j]);
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//                    printf("%5d", arr[i][j]);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    char arr[3][3] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf("%c", &arr[i][j]);
//            getchar();
//        }
//    }
//    int K1 = 0;
//    int B1 = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            if (arr[i][j] == 'K')
//                K1++;
//            if (arr[i][j] == 'B')
//                B1++;
//        }
//        if (K1 == 3 || B1 == 3)
//            break;
//        K1 = 0;
//        B1 = 0;
//    }
//
//    int K2 = 0;
//    int B2 = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            if (arr[j][i] == 'K')
//                K2++;
//            if (arr[j][i] == 'B')
//                B2++;
//        }
//        if (K2 == 3 || B2 == 3)
//            break;
//        K2 = 0;
//        B2 = 0;
//    }
//    int K3 = 0;
//    int B3 = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            if (i == j)
//            {
//                if (arr[i][j] == 'K')
//                    K3++;
//                if (arr[i][j] == 'B')
//                    B3++;
//            }
//        }
//        if (K3 == 3 || B3 == 3)
//            break;
//        K3 = 0;
//        B3 = 0;
//    }
//    int K4 = 0;
//    int B4 = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            if (i + j == 2)
//            {
//                if (arr[i][j] == 'K')
//                    K4++;
//                if (arr[i][j] == 'B')
//                    B4++;
//            }
//        }
//        if (K4 == 3 || B4 == 3)
//            break;
//        K4 = 0;
//        B4 = 0;
//    }
//    if (K1 == 3 || K2 == 3 || K3 == 3 || K4 == 3)
//        printf("KiKi wins!");
//    else if (B1 == 3 || B2 == 3 || B3 == 3 || B4 == 3)
//        printf("BoBo wins!");
//    else
//        printf("No winner!");
//        return 0;
//    
//}



#include<stdio.h>

void reverse(int n)
{
    if (n <6)
    {
        printf("%d", n);
    }
    else
    {
        reverse(n / 6);
        printf("%d", n % 6);
    }
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    reverse(n);
    return 0;
}