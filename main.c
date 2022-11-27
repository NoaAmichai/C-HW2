#include <stdio.h>
#include "my_mat.h"
#define N 10

int main()
{
    int i, j;
    char funtcion;
    int mat[N][N];
    while (scanf("%c", &funtcion) != EOF)
    {
        if (funtcion == 'A')
        {
            getMat(mat);
            setMat(mat);
        }
        else if (funtcion == 'B')
        {
            scanf("%d",&i);
            scanf("%d" ,&j);
            hasPath(mat, i, j);
        }
        else if (funtcion == 'C')
        {
            scanf("%d" ,&i);
            scanf("%d" ,&j);
            theShortestPath(mat, i, j);
        }
        else if (funtcion == 'D')
        {
            break;
        }
    }
    return 0;
}