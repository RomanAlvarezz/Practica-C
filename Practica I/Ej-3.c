#include <stdio.h>
#include <stdlib.h>
#define N 3
#define MAX 10

void showMatrix(int M[N][N]);
void loadMatrix(int M[N][N]);
void addMatrix(int X[N][N], int Y[N][N]);

int main () {
    srand(getpid());
    int A[N][N], B[N][N];   

    loadMatrix(A);
    loadMatrix(B);

    showMatrix(A);
    printf("\n");
    showMatrix(B);
    printf("\n");
    addMatrix(A, B);

    return 0;
}

void addMatrix(int X[N][N], int Y[N][N]){
    int i, j;

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            printf("%i,", X[i][j] + Y[i][j]);
        }
        printf("\n");
    }
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

void loadMatrix(int M[N][N]) {
    int i, j;

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            M[i][j] =  rand() % (MAX + 1); 
        }
    }
}