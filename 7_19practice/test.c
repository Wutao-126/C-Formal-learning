#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"


typedef char BTDataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	BTDataType data;
}BTNode;


//前序
void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	printf("%c ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

//中序
void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%c ", root->data);
	InOrder(root->right);
}

//后序
void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%c ", root->data);
}

//结点个数
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

//叶子结点个数
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left|| root->right)
	{
		return TreeLeafSize(root->left) + TreeLeafSize(root->right);
	}
	return 1;
	
}

//层序遍历
void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);
	if (root)
	{
		QueuePush(&q, root);
	}
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);
		printf("%c ", front->data);
		if (front->left)
		{
			QueuePush(&q, front->left);
		}
		if (front->right)
		{
			QueuePush(&q, front->right);
		}
	}
	printf("\n");
	QueueDestory(&q);
}

int main()
{
	BTNode* A = (BTNode*)malloc(sizeof(BTNode));
	A->data = 'A';
	A->left = NULL;
	A->right = NULL;

	BTNode* B = (BTNode*)malloc(sizeof(BTNode));
	B->data = 'B';
	B->left = NULL;
	B->right = NULL;

	BTNode* C = (BTNode*)malloc(sizeof(BTNode));
	C->data = 'C';
	C->left = NULL;
	C->right = NULL;

	BTNode* D = (BTNode*)malloc(sizeof(BTNode));
	D->data = 'D';
	D->left = NULL;
	D->right = NULL;

	BTNode* E = (BTNode*)malloc(sizeof(BTNode));
	E->data = 'E';
	E->left = NULL;
	E->right = NULL;
	A->left = B;
	B->left = D;
	B->right = E;
	A->right = C;
	PrevOrder(A);
	printf("\n");
	InOrder(A);
	printf("\n");

	PostOrder(A);
	printf("\n");

	printf("%d\n", TreeSize(A));
	printf("%d\n", TreeLeafSize(A));

	LevelOrder(A);
	return 0;
}
















//int main()
//{
//	/*char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));*/
//
//	
//		unsigned long ulA = 0x11000000;
//		printf("%x\n", *(unsigned char*)&ulA);
//
//	return 0;
//}


//int cmp_int(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int Find(int arr[], int sz)
//{
//	qsort(arr, sz, sizeof(int), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = i + 1; j < sz; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				count++;
//				if (count >= sz / 2)
//				{
//					return arr[i];
//				}
//			}
//			else 
//			{
//				break;
//			}
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,0,3,4,5,6,5,4,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Find(arr, sz);
//	printf("%d", ret);
//	return 0;
//}