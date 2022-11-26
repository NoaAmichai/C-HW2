#include <stdio.h>
#include "my_mat.h"
#define N 10

int main()
{
    int i, j;
    char funtcion;
    int arr[N][N];
    while (scanf("%c", &funtcion) != EOF)
    {
        if (funtcion == 'A')
        {
            getMat(arr);
            setMat(arr);
        }
        else if (funtcion == 'B')
        {
            scanf("%d %d",&i,&j);
            hasPath(arr, i, j);
        }
        else if (funtcion == 'C')
        {
            scanf("%d %d",&i,&j);
            theShortestPath(arr, i, j);
        }
        else if (funtcion == 'D')
        {
            break;
        }
    }
    return 0;
}