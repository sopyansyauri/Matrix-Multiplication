#include <stdio.h>
#include <stdlib.h>

void input(double arr[][10], double m, double n)
{
    int i, j;
    printf("\nEnter elements of matrix:\n");

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("Enter elements a%d%d: ", i + 1, j + 1);
            scanf("%lf", &arr[i][j]);
        }
    }
}

void display(double arr[][10], double m, double n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%f", arr[i][j]);
        }
    }
}

void multiply(double a[][10], double b[][10], double c[][10], double m, double n, double p, double q)
{
    int i, j, k;
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < q; ++j)
        {
            for (k = 0; k < n; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int m, n, p, q, i, j, k;
    double a[10][10], b[10][10], res[10][10];

    printf("Enter the no of rows and cols of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and cols of the second matrix\n");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("Matrix is incompatible for multiplication\n");
    }
    else
    {
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%lf", &a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%lf", &b[i][j]);
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%lf\t", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
