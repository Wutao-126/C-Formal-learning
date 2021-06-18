# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int G = 0, g = 0;
	int S = 0, s = 0;
	int K = 0, k = 0;
	int flag = 0;
	scanf("%d.%d.%d %d.%d.%d", &g, &s, &k, &G, &S, &K);
	if (G < g)
	{
		int tmp = G;
		G = g;
		g = tmp;
		tmp = S;
		S = s;
		s = tmp;
		tmp = K;
		K = k;
		k = tmp;
		flag = 1;
	}
	if (K < k)
	{
		K = 29 - (k - K);
		S -= 1;
	}
	else
	{
		K -= k;
	}
	if (S< s)
	{
		S = 17 - (s - S);
		G -= 1;
	}
	else
	{
		S -= s;
	}
	G -= g;
	flag == 0 ? printf("%d.%d.%d", G, S, K) : printf("-%d.%d.%d", G, S, K);
	return 0;
}