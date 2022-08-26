// Write a C program to perform matrix multiplication.
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], m, n, o, p;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns: ");
    scanf("%d%d", &o, &p);
    // M number of elements in row, N column
    // O row P column
    if (n == o)
    {
        printf("Enter the elements of the first matrix\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of the second matrix\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < o; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        int c[100][100];
        int i, j, k;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < p; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("------------------------");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        
    }
}
