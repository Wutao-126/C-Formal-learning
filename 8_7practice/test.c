#include<stdio.h>

//int main()
//{
//	int n = 0;
//	int arr[10][10] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (j == 1 || j == i)
//			{
//				arr[i][j] = 1;
//				printf("%d ",arr[i][j]);
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



int main()
{
	int arr[4] = { 0 }; //Ĭ��4���˶���������

	int i;
	for (i = 0; i < 4; i++) //���������ĸ����е�ĳ����������
	{
		arr[i] = 1; //����ĳ����������
		if ((arr[0] != 1) +
			(arr[2] == 1) +
			(arr[3] == 1) +
			(arr[3] != 1) == 3)
		{
			break; //����ʹ���������ˣ�
		}
		arr[i] = 0; //�����㻹�����
	}

	putchar('A' + i); //��ӡ���ֵı�š����ǵı����0 1 2 3������'A'����A B C D��
	return 0;
}