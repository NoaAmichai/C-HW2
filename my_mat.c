#include <stdio.h>
#include "my_mat.h"
#include <math.h>
#define N 10

// int min(int a, int b)
// {
//     if (a < b) return a;
//     else return b;
// }

void setMat(int mat[N][N])
{
    for (int k = 1; k <= 10; ++k)
    {
        for (int i = 0; i < 10; ++i)
        {
            for (int j = 0; j < 10; ++j)
            {
                mat[i][j] = min(mat[i][k] + mat[k][j], mat[i][j]);
            }
        }
    }
}

void getMat(int mat[N][N])
{
    int num;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            scanf("%d", &num);
            mat[i][j] = num;
        }
    }
    return;
}

void hasPath(int mat[N][N])
{
    setMat(mat);
    int i, j;
    scanf("%d %d", &i, &i);
    // TODO make a correct if statement
    if (mat[i][j])
    {

        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

void theShortestPath(int mat[N][N])
{

    setMat(mat);
    int i, j;
    scanf("%d %d", &i, &i);
    // TODO make a correct if statement
    if (mat[i][j])
    {
        printf("%d\n", mat[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}