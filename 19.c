//Write a minute event program for performing matrix addition, multiplication and finding the transpose.Use function to read the matrix sum of two matrices and find the product of two matrices. Find the transpose of matrix and display a matrix.
#include<stdio.h>
void readmat(){
    int m,n;
    printf("Enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
int add(int a[][100],int b[][100],int m,int n){
    int i,j,c[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    display(c,m,n);
    return 0;
}
void multiply(int a[][100],int b[][100],int n){
    int c[n][n];
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            c[i][j]=0;
            for(k=0;k<n;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
}
void transpose(int a[][100],int m,int n){
    int i,j;
    int c[][100];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[j][i]=a[i][j];
        }
    }
    display(c,m,n);
}
void display(int a[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}
void main(){
    int a[100][100],b[100][100],c[100][100],m,n,c;
    printf("Choose the operation\n1.Addition\n2.Multiplication\n3.Transpose\n4.Read and Display");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        printf("Enter the number of rows and columns of the first matrix\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements of the first matrix\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the number of rows and columns of the second matrix\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements of the second matrix\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&b[i][j]);
            }
        }
        add(a,b,m,n);
        break;
    case 2:
        printf("Enter the number of rows and columns of the first matrix\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements of the first matrix\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the number of rows and columns of the second matrix\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements of the second matrix\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&b[i][j]);
            }
        }
        multiply(a,b,n);
        break;

    case 3:
        printf("Enter the number of rows and columns of the matrix\n");
        scanf("%d%d",&m,&n);
        printf("Enter the elements of the matrix\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        transpose(a,m,n);
        break;
    case 4:
    readmat();
        display(a,m,n);
        break;
    }
}