#include <stdio.h>
int main()
{
    int matrix1[2][2], matrix2[2][2], result[2][2], i, j, k, sum;

    // matric of matrix1
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter matrix number:");
            scanf("%d", &matrix1[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    // matrix of matrix2
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter matrix number:");
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    // matrix of c
    printf("Result:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = 0;
            for (k = 0; k < 2; k++)
            {
                sum = matrix1[i][k] + matrix2[k][j];
                result[i][j] = sum;
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}