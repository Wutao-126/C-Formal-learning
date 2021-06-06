# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>

//
//int check_num(char *p[20],int n)
//{
//	int i = 0;
//	for (i = 0; i <n ; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 17; j++)
//		{
//			if (!isdigit(*(p[i]+j)))
//				return 0;
//		}
//	}
//	return 1;
//}
//
//char get_num(char*p[20], int n)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 17; j++)
//		{
//			switch (j)
//			{
//			case 0:
//				sum += ((*p+i)[j] * 7 / 100);
//				break;
//			case 1:
//				sum += ((*p + i)[j] * 9 / 100);
//				break;
//			case 2:
//				sum += ((*p + i)[j] * 10 / 100);
//				break;
//			case 3:
//				sum += ((*p + i)[j] * 5 / 100);
//				break;
//			case 4:
//				sum += ((*p + i)[j] * 8 / 100);
//				break;
//			case 5:
//				sum += ((*p + i)[j] * 4 / 100);
//				break;
//			case 6:
//				sum += ((*p + i)[j] * 2 / 100);
//				break;
//			case 7:
//				sum += ((*p + i)[j] * 1 / 100);
//				break;
//			case 8:
//				sum += ((*p + i)[j] * 6 / 100);
//				break;
//			case 9:
//				sum += ((*p + i)[j] * 3 / 100);
//				break;
//			case 10:
//				sum += ((*p + i)[j] * 7 / 100);
//				break;
//			case 11:
//				sum += ((*p + i)[j] * 9 / 100);
//				break;
//			case 12:
//				sum += ((*p + i)[j] * 10 / 100);
//				break;
//			case 13:
//				sum += ((*p + i)[j] * 5 / 100);
//				break;
//			case 14:
//				sum += ((*p + i)[j] * 8 / 100);
//				break;
//			case 15:
//				sum += ((*p + i)[j] * 4 / 100);
//				break;
//			case 16:
//				sum += ((*p+i)[j] * 2 / 100);
//				break;
//			default:
//				break;
//			}
//		}
//	}
//	switch (sum % 11)
//	{
//	case 0:
//		return '1';
//	case 1:
//		return '0';
//	case 2:
//		return'X';
//	case 3:
//		return '9';
//	case 4:
//		return '8';
//	case 5:
//		return '7';
//	case 6:
//		return '6';
//	case 7:
//		return '5';
//	case 8:
//		return '4';
//	case 9:
//		return '3';
//	case 10:
//		return '2';
//	default:
//		return -1;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[100][20] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", &arr[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		int flag = 0;
//		int ret = check_num(arr[i][20],n);
//		if (ret == 0)
//		{
//			printf("%s\n", arr[i]);
//			flag = 1;
//			count++;
//		}
//		if (!flag)
//		{
//			char M = get_num(arr[i][20],n);
//			if (M != arr[i][17])
//			{
//				printf("%s\n", arr[i]);
//				count++;
//			}
//		}
//	}
//	if (count == n)
//	{
//		printf("All passed");
//	}
//	return 0;
//}


//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[4][19];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s", arr + i);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//#include<ctype.h>
//
//int check_num(char arr[])
//{
//	int i = 0;
//	for (i = 0; i < 17; i++)
//	{
//		if (!isdigit(arr[i]))
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//char get_num(char* arr, int num1[], int num2[], char str[])
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 17; i++)
//	{
//		sum += (arr[i]-'0') * num1[i];
//	}
//	sum %= 11;
//	for (i = 0; i < 11; i++)
//	{
//		if (num2[i] == sum)
//			return str[i];
//	}
//	return -1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[20] = { 0 };
//	int num1[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	int num2[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	char str[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0; i < n; i++)
//	{
//		int flag = 0;
//		scanf("%s", arr);
//		if (check_num(arr) == 0)
//		{
//			printf("%s\n", arr);
//			flag = 1;
//		}
//		if (flag==0)
//		{
//			char M = get_num(arr, num1, num2, str);
//			if (M != arr[17])
//			{
//				printf("%s\n", arr);
//				flag = 1;
//			}
//		}
//	}
//	if (!flag)
//	{
//		printf("All passed");
//	}
//	return 0;
//}
//
//#include<stdio.h> 
//#include<string.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    int quan[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//    char jiaoyan[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
//    bool flag = true;
//    char id[20];
//    for (int i = 0; i < N; i++) 
//    {
//        scanf("%s", id);
//        int j = 0;
//        int sum = 0;
//        for (j = 0; j < 17; j++) 
//        {
//            if (!(id[j] >= '0' && id[j] <= '9'))
//            {
//                break;
//            }
//            sum += (id[j] - '0') * quan[j];
//        }
//        if (j < 17)
//        {
//            flag = false;
//            {
//                printf("%s\n", id);
//            }
//        }
//        else {
//            if (jiaoyan[sum % 11] != id[17]) 
//            {
//                flag = false;
//                {
//                    printf("%s\n", id);
//                }
//            }
//        }
//    }
//    if (flag == true)
//    {
//        printf("All passed\n");
//    }
//    return 0;
//}



