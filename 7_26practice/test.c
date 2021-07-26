#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//67. 二进制求和
//给你两个二进制字符串，返回它们的和（用二进制表示）。
//输入为 非空 字符串且只包含数字 1 和 0。

//输入: a = "11", b = "1"
//输出 : "100"


//思路：1.求出两个字符串的长度，malloc一个数组，长度以较长字符串的长度+2(因为可能进位时多出一位，还要一个长度给'\0'，所以要+2)
//      2.将创建的数组除最后一个字符外全部置为'0'，将最后一个字符置为'\0',创建一个进位变量(flag)
//      3.将两个字符串从末尾开始相加，如果相加后为2，则将该字符置为0，进位变量flag置为1，如果相加后为3，则将该字符置为1，flag置为1
//      4.每次相加后应将flag重置为0，以便储存下一次的进位
//      5.重复上述步骤直到，两个字符串都为空
//      6.返回字符串时应判断首字符是否为零，因为可能出现不进位的情况，如果为0则应返回第二个字符的地址




//char* addBinary(char* a, char* b) {
//    int lena = strlen(a);
//    int lenb = strlen(b);
//    int len = (lena > lenb ? lena : lenb);
//    char* str = (char*)malloc(sizeof(char) * (len + 2));
//    memset(str, '0', (len + 2));
//    str[len + 1] = '\0';
//    lena--, lenb--;
//    int flag = 0;//进位变量
//    while (lena >= 0 || lenb >= 0)
//    {
//        if (lena < 0 && lenb >= 0)//可能两字符串长度不一样，应讨论字符串是否为空
//        {
//            *(str + len) = *(b + lenb) + flag;
//            flag = 0;//每次相加后应将flag重置
//        }
//        else if (lenb < 0 && lena >= 0)//同上
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
//    if (flag == 1)//出现"1111"+"1111"，循环结束时虽然两个字符串都为空，但最后一次进位并没有加上
//    {
//        str[0] = '1';
//    }
//    return str[0] == '0' ? str + 1 : str;//判断首字符
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