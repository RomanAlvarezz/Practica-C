#include <stdio.h>
#define N 4

void generateMatrix(int M[N][N]);
void showMatrix(int M[N][N]);

int main() {
    int matrix[N][N] = {
        {34,56,92,11},
        {9,12,932,59},
        {1,2,3,4},
        {67,91,32,45}
    }; 

    showMatrix(matrix);
    printf("\n");
    generateMatrix(matrix);
    showMatrix(matrix);

    return 0;
}

void showMatrix(int M[N][N]) {
    int i, j;

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("%i,", M[i][j]);
        }
        printf("\n");
    }
}

void generateMatrix(int M[N][N]) {
    int i, j;

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
           if (i == j) {
                M[i][j] = 1;
           } else {
                M[i][j] = 0;
           }
        }
    }
}