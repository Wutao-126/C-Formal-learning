# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d", ret);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1; 
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	scanf("%d", &n);
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ����±��ǣ�%d", mid);
//			return 0;
//		}
//	}
//	printf("�Ҳ���");
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char arr[] = "hello world!!!!";
//	char arr2[] = "###############";
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr[left];
//		arr2[right] = arr[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//
//
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������->");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������");
//	}
//	return 0;
//}

//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	printf("��ע����ĵ��Խ���1���Ӻ�ػ������������������ȡ���ػ�\n");
//again:
//	printf("������->");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		printf("�������������\n");
//		goto again;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i % 100 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i)*pow(-1,(double)i+1);
//	}
//	printf("%lf", sum);
//	return 0;
//}


//int  main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > arr[max])
//			max = i;
//	}
//	printf("%d", arr[max]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	if (i == 0)
//		printf("hehe");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("ż��");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//        case 1:
//            printf("����һ\n");
//            break;
//        case 2:
//            printf("���ڶ�\n");
//            break;
//        case 3:
//            printf("������\n");
//            break;
//        case 4:
//            printf("������\n");
//            break;
//        case 5:
//            printf("������\n");
//            break;
//        case 6:
//            printf("������\n");
//            break;
//        case 7:
//            printf("������\n");
//            break;
//    }
//    return 0;
//}



#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 10)
    {
        if (i == 5)
            continue;
        printf("%d ", i);
        i = i + 1;
    }
    return 0;
}