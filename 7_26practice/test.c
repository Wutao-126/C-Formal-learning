#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//67. ���������
//���������������ַ������������ǵĺͣ��ö����Ʊ�ʾ����
//����Ϊ �ǿ� �ַ�����ֻ�������� 1 �� 0��

//����: a = "11", b = "1"
//��� : "100"


//˼·��1.��������ַ����ĳ��ȣ�mallocһ�����飬�����Խϳ��ַ����ĳ���+2(��Ϊ���ܽ�λʱ���һλ����Ҫһ�����ȸ�'\0'������Ҫ+2)
//      2.����������������һ���ַ���ȫ����Ϊ'0'�������һ���ַ���Ϊ'\0',����һ����λ����(flag)
//      3.�������ַ�����ĩβ��ʼ��ӣ������Ӻ�Ϊ2���򽫸��ַ���Ϊ0����λ����flag��Ϊ1�������Ӻ�Ϊ3���򽫸��ַ���Ϊ1��flag��Ϊ1
//      4.ÿ����Ӻ�Ӧ��flag����Ϊ0���Ա㴢����һ�εĽ�λ
//      5.�ظ���������ֱ���������ַ�����Ϊ��
//      6.�����ַ���ʱӦ�ж����ַ��Ƿ�Ϊ�㣬��Ϊ���ܳ��ֲ���λ����������Ϊ0��Ӧ���صڶ����ַ��ĵ�ַ




//char* addBinary(char* a, char* b) {
//    int lena = strlen(a);
//    int lenb = strlen(b);
//    int len = (lena > lenb ? lena : lenb);
//    char* str = (char*)malloc(sizeof(char) * (len + 2));
//    memset(str, '0', (len + 2));
//    str[len + 1] = '\0';
//    lena--, lenb--;
//    int flag = 0;//��λ����
//    while (lena >= 0 || lenb >= 0)
//    {
//        if (lena < 0 && lenb >= 0)//�������ַ������Ȳ�һ����Ӧ�����ַ����Ƿ�Ϊ��
//        {
//            *(str + len) = *(b + lenb) + flag;
//            flag = 0;//ÿ����Ӻ�Ӧ��flag����
//        }
//        else if (lenb < 0 && lena >= 0)//ͬ��
//        {
//            *(str + len) = *(a + lena) + flag;
//            flag = 0;
//        }
//        else
//        {
//            *(str + len) = *(a + lena) + *(b + lenb) + flag - '0';
//            flag = 0;
//        }
//        if (*(str + len) == '2')
//        {
//            *(str + len) = '0';
//            flag = 1;
//        }
//        if (*(str + len) == '3')
//        {
//            *(str + len) = '1';
//            flag = 1;
//        }
//        lena--;
//        lenb--;
//        len--;
//    }
//    if (flag == 1)//����"1111"+"1111"��ѭ������ʱ��Ȼ�����ַ�����Ϊ�գ������һ�ν�λ��û�м���
//    {
//        str[0] = '1';
//    }
//    return str[0] == '0' ? str + 1 : str;//�ж����ַ�
//}
//
//int main()
//{
//    char arr1[] = "100";		
//
//    char arr2[] = "110010";
//    char*str = addBinary(arr1, arr2);
//    return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//
//int main()
//{
//    char ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        getchar();
//        if (isalpha(ch))
//        {
//            printf("YES\n");
//        }
//        else
//        {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        else
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (j == 0 || j == n - 1)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}