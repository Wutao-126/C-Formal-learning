# define _CRT_SECURE_NO_WARNINGS
//989. 数组形式的整数加法
//对于非负整数?X?而言，X?的数组形式是每位数字按从左到右的顺序形成的数组。
//例如，如果?X = 1231，那么其数组形式为?[1, 2, 3, 1]。
//给定非负整数 X 的数组形式?A，返回整数?X + K?的数组形式。
//输入：A = [1, 2, 0, 0], K = 34
//输出：[1, 2, 3, 4]
//解释：1200 + 34 = 1234

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int kSize = 0;//计算数字k的位数
    int kNum = k;
    while (kNum)
    {
        kSize++;
        kNum /= 10;
    }
    int len = numSize > kSize ? numSize : kSize;//比较数组长度和数字k位数的大小，存在len中
    int* retArr = (int*)malloc(sizeof(int) * (len + 1));//根据题目要求动态创建数组，数组长度为len+1 是                                                  //因为可能存在进位，导致长度增加
    int flag = 0;//进位变量
    int Ai = numSize - 1;//num数组下标
    int Reti = 0;//存放结果数组下标
    while (len--)//用len控制循环次数，
    {
        int a = 0;//这里如果num数组长度小于数字k的位数即数组num会出现下标为负数的情况
        if (Ai >= 0)//所以应在这里判断一下
        {
            a = num[Ai];
            Ai--;
        }
        retArr[Reti] = a + k % 10 + flag;//我们先将结果正序储存在retArr中,当然结果为：数组num对应位加数字k对应位加上一位进位
        if (retArr[Reti] >= 10)//如果结果>=10则需要进位
        {
            retArr[Reti] %= 10;//取个位
            flag = 1;//下一位进1
        }
        else
        {
            flag = 0;
        }
        Reti++;
        k /= 10;
    }
    if (flag == 1)//这里是因为如果num数组长度等于数字k的位数，而在最后一位计算时出现了进位的情况，上面计算时会漏进一位，例如823+222
    {
        retArr[Reti] = 1;
        Reti++;
    }
    int left = 0, right = Reti - 1;
    while (left < right)//由于前面我们将结果数组正序储存，所以这里我们要将数组逆序
    {
        int tmp = retArr[left];
        retArr[left] = retArr[right];
        retArr[right] = tmp;
        left++;
        right--;
    }
    *returnSize = Reti;//需要给输出型参数赋值为结果数组长度
                      //赋值为Reti而不是Reti+1是因为上面已经Reti++
    return retArr;
}