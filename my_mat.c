#include <stdio.h>
#include "my_mat.h"
#define N 10

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}


//NEED TO FIX THIS FUNCTION
void setMat(int mat[N][N])
{
    int k, i, j;
    for (k = 0; k < N; ++k)
    {
        for (i = 0; i < N; ++i)
        {
            for (j = 0; j < N; ++j)
            {
                if (i == j)
                {
                    mat[i][j] = 0;
                }
                else
                {
                    mat[i][j] = min(mat[i][k] + mat[k][j], mat[i][j]);
                }
            }
        }
    }
}

void getMat(int mat[N][N])
{
    int num, i, j;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1; j++)
        {
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    return;
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