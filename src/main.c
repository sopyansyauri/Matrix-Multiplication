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

void multiply(double a[][10], double b[][10], double c[][10], double rows_array_1, double cols_array_1, double rows_array_2, double cols_array_2)
{
    int i, j, k;
    for (i = 0; i < rows_array_2; ++i)
    {
        for (j = 0; j < cols_array_2; ++j)
        {
            c[i][j] = 0;
        }
    }

    for (i = 0; i < rows_array_1; ++i)
    {
        for (j = 0; j < cols_array_2; ++j)
        {
            for (k = 0; k < cols_array_1; ++k)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int rows_array_1, cols_array_1;
    int rows_array_2, cols_array_2;
    int i, j, k;
    double a[10][10], b[10][10], res[10][10];

    printf("Enter the no of rows and cols of first matrix\n");
    scanf("%d%d", &rows_array_1, &cols_array_1);
    printf("Enter the number of rows and cols of the second matrix\n");
    scanf("%d%d", &rows_array_2, &cols_array_2);

    if (cols_array_1 != rows_array_2)
    {
        printf("Matrix is incompatible for multiplication\n");
    }
    else
    {
        printf("Enter the elements of Matrix-A:\n");
        for (i = 0; i < rows_array_1; i++)
        {
            for (j = 0; j < cols_array_1; j++)
            {
                scanf("%lf", &a[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < rows_array_2; i++)
        {
            for (j = 0; j < cols_array_2; j++)
            {
                scanf("%lf", &b[i][j]);
            }
        }

        for (i = 0; i < rows_array_1; i++)
        {
            for (j = 0; j < cols_array_2; j++)
            {
                res[i][j] = 0;
                for (k = 0; k < cols_array_1; k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < cols_array_1; i++)
        {
            for (j = 0; j < cols_array_2; j++)
            {
                printf("%lf\t", res[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
