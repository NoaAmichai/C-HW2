#include <stdio.h>
#include "my_mat.h"
#define N 10

void getMat(int mat[N][N]){
    int num;
    for (int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            scanf("%d",&num);
            mat[i][j]=num;
        }
    }
    return;
}