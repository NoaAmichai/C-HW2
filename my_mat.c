#include <stdio.h>
#include "my_mat.h"
#define N 10

int[][] getMat(){
    int [][] mat=new int[N][N];
    int num;
    for (int i=0;i<N-1;i++){
        for(int j=0;j<N-1;j++){
            scanf("%d",&num);
            mat[i][j]=num;
        }
    }
    return mat;
}