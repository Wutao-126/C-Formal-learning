
//����
//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
//����������
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���������
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
///ʾ��1
//���룺
//2008 2
//�����29


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