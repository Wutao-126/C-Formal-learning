# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	double* arr = (double*)malloc(sizeof(double) * n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
	}
	double sum = 0;
	for (i = 0; i < n; i++)
	{
				sum += arr[i]*(n-i)*(i+1);
	}
	printf("%.2lf", sum);
	free(arr);
	arr = NULL;
	return 0;
}