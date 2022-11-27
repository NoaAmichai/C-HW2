#include <stdio.h>
#include "my_mat.h"
#define N 10
#define MIN(a, b) ((a > b) ? (b) : (a))


void setMat(int mat[N][N])
{
    int k, i, j;
    for (k = 0; k < N; k++)
    {
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if ((mat[i][k] != 0) && (mat[k][j] != 0))
                {
                    if (i == j)
                    {
                        continue;;
                    }
                    if (mat[i][j] > 0)
                    {
                        mat[i][j] = MIN(mat[i][k] + mat[k][j], mat[i][j]);
                    }
                    else
                    {
                        mat[i][j] = mat[i][k] + mat[k][j];
                    }
                }
            }
        }
    }
}

void getMat(int mat[N][N])
{
    int num, i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
}

void hasPath(int mat[N][N], int i, int j)
{
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
    if (mat[i][j] > 0)
    {
        printf("%d\n", mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}