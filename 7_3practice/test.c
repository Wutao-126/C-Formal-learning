# define _CRT_SECURE_NO_WARNINGS
//989. ������ʽ�������ӷ�
//���ڷǸ�����?X?���ԣ�X?��������ʽ��ÿλ���ְ������ҵ�˳���γɵ����顣
//���磬���?X = 1231����ô��������ʽΪ?[1, 2, 3, 1]��
//�����Ǹ����� X ��������ʽ?A����������?X + K?��������ʽ��
//���룺A = [1, 2, 0, 0], K = 34
//�����[1, 2, 3, 4]
//���ͣ�1200 + 34 = 1234

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int kSize = 0;//��������k��λ��
    int kNum = k;
    while (kNum)
    {
        kSize++;
        kNum /= 10;
    }
    int len = numSize > kSize ? numSize : kSize;//�Ƚ����鳤�Ⱥ�����kλ���Ĵ�С������len��
    int* retArr = (int*)malloc(sizeof(int) * (len + 1));//������ĿҪ��̬�������飬���鳤��Ϊlen+1 ��                                                  //��Ϊ���ܴ��ڽ�λ�����³�������
    int flag = 0;//��λ����
    int Ai = numSize - 1;//num�����±�
    int Reti = 0;//��Ž�������±�
    while (len--)//��len����ѭ��������
    {
        int a = 0;//�������num���鳤��С������k��λ��������num������±�Ϊ���������
        if (Ai >= 0)//����Ӧ�������ж�һ��
        {
            a = num[Ai];
            Ai--;
        }
        retArr[Reti] = a + k % 10 + flag;//�����Ƚ�������򴢴���retArr��,��Ȼ���Ϊ������num��Ӧλ������k��Ӧλ����һλ��λ
        if (retArr[Reti] >= 10)//������>=10����Ҫ��λ
        {
            retArr[Reti] %= 10;//ȡ��λ
            flag = 1;//��һλ��1
        }
        else
        {
            flag = 0;
        }
        Reti++;
        k /= 10;
    }
    if (flag == 1)//��������Ϊ���num���鳤�ȵ�������k��λ�����������һλ����ʱ�����˽�λ��������������ʱ��©��һλ������823+222
    {
        retArr[Reti] = 1;
        Reti++;
    }
    int left = 0, right = Reti - 1;
    while (left < right)//����ǰ�����ǽ�����������򴢴棬������������Ҫ����������
    {
        int tmp = retArr[left];
        retArr[left] = retArr[right];
        retArr[right] = tmp;
        left++;
        right--;
    }
    *returnSize = Reti;//��Ҫ������Ͳ�����ֵΪ������鳤��
                      //��ֵΪReti������Reti+1����Ϊ�����Ѿ�Reti++
    return retArr;
}