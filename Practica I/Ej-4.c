#include <stdio.h>
#include <stdlib.h>
#define R 3
#define C 4
#define MAX 10

void showMatrix(int M[R][C]);
void loadMatrix(int M[R][C]);
void showTransposed(int M[R][C]);

int main() {
    int matrix[R][C];

    loadMatrix(matrix);
    showMatrix(matrix);
    printf("\n");
    showTransposed(matrix);

    return 0;
}

void showMatrix(int M[R][C]) {
    int i, j;

    for (i=0; i<R; i++) {
        for (j=0; j<C; j++) {
            printf("%i,", M[i][j]);
        }
        printf("\n");
    }
}

void loadMatrix(int M[R][C]) {
    int i, j;

    for (i=0; i<R; i++) {
        for (j=0; j<C; j++) {
            M[i][j] =  rand() % (MAX + 1); 
        }
    }
}

void showTransposed(int M[R][C]) {
    int i, j;

    for (j=0; j<C; j++) {
        for (i=0; i<R; i++) {
            printf("%i,", M[i][j]);
        }
        printf("\n");
    }
}