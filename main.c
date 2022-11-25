#include <stdio.h>
#include "my_mat.h"

#define N 10

int main()
{
    int i, j;
    char funtcion;
    int arr[N][N];
    while (funtcion != EOF)
    {
        scanf("%c", &funtcion);
        if (funtcion == 'A')
        {
            getMat(arr);
        }
        else if (funtcion == 'B')
        {
            hasPath(arr, i, j);
        }
        else if (funtcion == 'C')
        {
            theShortestPath(arr, i, j);
        }
        else if (funtcion == 'D')
        {
            break;
        }
    }


    return 0;
}