
//描述
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
//输入描述：
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
///示例1
//输入：
//2008 2
//输出：29


#include<stdio.h>
int main()
{
    int year = 0;
    int month = 0;
    while (scanf("%d%d", &year, &month) != EOF)
    {
        switch (month)
        {
        case 1:
            printf("31\n");
            break;
        case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
                printf("29\n");
            else
                printf("28\n");
            break;
        case 3:
            printf("31\n");
            break;
        case 4:
            printf("30\n");
            break;
        case 5:
            printf("31\n");
            break;
        case 6:
            printf("30\n");
            break;
        case 7:
            printf("31\n");
            break;
        case 8:
            printf("31\n");
            break;
        case 9:
            printf("30\n");
            break;
        case 10:
            printf("31\n");
            break;
        case 11:
            printf("30\n");
            break;
        case 12:
            printf("31\n");
            break;
        }
    }
    return 0;
}