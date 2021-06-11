# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        getchar();
//        if (a + b > c && a - b < c)
//        {
//            if (a ==b&&b==c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
//            {
//                printf("Isosceles triangle!\n");
//            }
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}



//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    double w = 0;
//    double h = 0;
//    while (scanf("%lf%lf", &w, &h) != EOF)
//    {
//        getchar();
//        h /= 100;
//        if (w / (pow(h, 2)) < 18.5)
//            printf("Underweight\n");
//        else if ((w / (pow(h, 2)) >= 18.5) && (w / (pow(h, 2)) <= 23.9))
//            printf("Normal\n");
//        else if ((w / (pow(h, 2)) > 23.9) && (w / (pow(h, 2)) <= 27.9))
//            printf("Overweight\n");
//        else
//            printf("Obese\n");
//    }
//    return 0;
//}


//#include<math.h>
//int main()
//{
//	double a = 0;
//	double b = 0;
//	double c = 0;
//	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
//	{
//		getchar();
//		;
//		if (a != 0)
//		{
//			double t = b * b - 4 * a * c;
//			if (t == 0)
//				printf("x1=x2=%.2lf", (-b) / 2 * a);
//			else if (t > 0)
//				printf("x1=%.2lf;x2=%.2lf", (-b) / (2 * a) - sqrt(t) / (2 * a), (-b) / (2 * a) + sqrt(t) / (2 * a) );
//			else
//				printf("x1=%.2lfi;x2=%.2lfi", (-b) / (2 * a) - sqrt(-t) / (2 * a), (-b) / (2 * a) + sqrt(-t) / (2 * a));
//		}
//		else
//			printf("Not quadratic equation");
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int m = 0;
//    int y = 0;
//    while (scanf("%d%d", &y, &m) != EOF)
//    {
//        getchar();
//
//        switch (m)
//        {
//            
//        case 1:
//            printf("31\n");
//            break;
//            
//        case 2:
//            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//            {
//               printf("29\n");
//               break;
//            }
//            else
//            {
//                printf("28\n");
//            }
//            break;
//        case 3:
//            printf("31\n");
//            break;
//        case 4:
//            printf("30\n");
//            break;
//        case 5:
//            printf("31\n");
//            break;
//        case 6:
//            printf("30\n");
//            break;
//        case 7:
//            printf("31\n");
//            break;
//        case 8:
//            printf("31\n");
//            break;
//        case 9:
//            printf("30\n");
//            break;
//        case 10:
//            printf("31\n");
//            break;
//        case 11:
//            printf("30\n");
//            break;
//        case 12:
//            printf("31\n");
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    double a = 0;
//    double b = 0;
//    char c = 0;
//    while (scanf("%lf%c%lf", &a, &c, &b) != EOF)
//    {
//        getchar();
//        switch (c)
//        {
//        case'+':
//            printf("%.4lf+%.4lf=%.4lf\n",a,b, a + b);
//            break;
//        case'-':
//            printf("%.4lf-%.4lf=%.4lf\n",a,b ,a - b);
//            break;
//        case'*':
//            printf("%.4lf*%.4lf=%.4lf\n",a,b, a * b);
//            break;
//        case'/':
//            if (b == 0.0)
//            {
//                printf("Wrong!Division by zero!");
//                break;
//            }
//            else
//            {
//                printf("%.4lf/%.4lf=%.4lf\n",a,b, a / b);
//                break;
//            }
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        getchar();
//        int i = 0;
//        for (i = n; i > 0; i--)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        getchar();
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i-1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        getchar();
//        int i = 0;
//        for (i = n; i > 0; i--)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf(" ");
//            int j = 0;
//            for (j = 0; j < n - i-1; j++)
//            {
//                printf(" ");
//            }
//          
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n+1; i++)
//        {
//            printf("* ");
//        }
//        printf("\n");
//        for (i = 0; i < n; i++)
//        {
//            printf(" ");
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}




//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        getchar();
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            if (i > 0)
//            {
//                for (j = 0; j <= n + i + 2; j++)
//                    printf(" ");
//            }
//            printf("\n");
//        }
//        printf("* ");
//        for (i = 0;i <= 2*n; i++)
//        {
//            printf(" ");
//        }
//        printf("\n");
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i + 1; j++)
//            {
//                printf("* ");
//            }
//            if (i < n - 1)
//            {
//                for (j = 0; j <= n + i + 2; j++)
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < 2 * n - 2*i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 0; i < n + 1; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= 2*i+1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || j == n - i - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

int main()
{
	int a[10] = { 0 * 10 };
	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d\\\bsads", a[i]);
	}
	return 0;
}