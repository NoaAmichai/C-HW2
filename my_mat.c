#include <stdio.h>
#include "my_mat.h"
#define N 10
#define MIN(a,b) ((a > b) ? (b) : (a))

// int min(int a, int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }

// NEED TO FIX THIS FUNCTION
void setMat(int mat[N][N])
{
    int k, i, j;
    for (k = 0; k < N; k++)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (i == j)
                {
                    mat[i][j] = 0;
                }
                else
                {
                    mat[i][j] = MIN(mat[i][k] + mat[k][j], mat[i][j]);
                }
            }
        }
    }
    // int row, columns;
    // for (row = 0; row < N; row++)
    // {
    //     for (columns = 0; columns < N; columns++)
    //     {
    //         printf("%d     ", mat[row][columns]);
    //     }
    //     printf("\n");
    // }

}

void getMat(int mat[N][N])
{
    int num, i, j;
    for (i = 0; i < N ; i++)
    {
        for (j = 0; j < N ; j++)
        {
            scanf("%d", &num);
            mat[i][j] = num;
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
}

void hasPath(int mat[N][N], int i, int j)
{
    setMat(mat);
    if (mat[i][j] > 0)
    {

        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void theShortestPath(int mat[N][N], int i, int j)
{
    setMat(mat);
    if (mat[i][j] > 0)
    {
        printf("%d\n", mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}