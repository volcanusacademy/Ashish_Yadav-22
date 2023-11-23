/*Problem 5: Matrix Multiplication
You are working on a project that involves multiplying two matrices. Write a C program that reads two matrices into arrays and multiplies them to produce the result. Display the resulting matrix after multiplication.*/
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j,k,sum;

    // matric of a
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter matrix number:");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // matrix of b
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Enter matrix number:");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix c:\n");
    // matrix of c
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum=0;
            for(k=0;k<2;k++){
                sum=a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}