#include <stdio.h>
#include "my_mat.h"

#define N 10

int main() {
    char funtcion;
    int arr[N][N];
    while (funtcion != EOF) {
        scanf("%c", &funtcion);

        if (funtcion == 'A') {
            getMat(arr);
        } else if (funtcion == 'B') {

        } else if (funtcion == 'C') {

        } else if (funtcion == 'D') {
            break;
        }
    }


    return 0;
}