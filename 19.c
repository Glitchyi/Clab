// Write a minute event program for performing matrix addition, multiplication and finding the transpose.Use function to read the matrix sum of two matrices and find the product of two matrices. Find the transpose of matrix and display a matrix.
#include <stdio.h>
#define MN 100
void display(int a[MN][MN], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}
void readmat()
{
    int m, n;
    printf("Enter the number of rows and columns of the matrix\n");
    int a[MN][MN];
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    display(a, m, n);
}
int add(int a[][MN], int b[][MN], int m, int n)
{
    int i, j, c[MN][MN];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    display(c, m, n);
    return 0;
}
void multiply(int a[MN][MN], int b[MN][MN], int n)
{
    int c[MN][MN];
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    display(c, n, n);
}
void transpose(int a[][MN], int m, int n)
{
    int i, j;
    int c[MN][MN];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    display(c, m, n);
}
void main()
{
    int a[MN][MN], b[MN][MN], c[MN][MN], m, n, cho;
    printf("Choose the operation\n1.Addition\n2.Multiplication\n3.Transpose\n4.Read and Display\n");
    scanf("%d", &cho);
    switch (cho)
    {
    case 1:
        printf("Enter the number of rows and columns of the first matrix\n");
        scanf("%d%d", &m, &n);
        printf("Enter the elements of the first matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        add(a, b, m, n);
        break;
    case 2:
        printf("Enter the number of rows and columns of the first matrix(single value)\n");
        scanf("%d", &m);
        printf("Enter the elements of the first matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        multiply(a, b, m);
        break;

    case 3:
        printf("Enter the number of rows and columns of the matrix\n");
        scanf("%d%d", &m, &n);
        printf("Enter the elements of the matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        transpose(a, m, n);
        break;
    case 4:
        readmat();
        
        break;
    }
}