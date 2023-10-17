#include <stdio.h>
#include <stdlib.h>

void showMatriz(int **matriz);
void escalarMatriz(int **matriz, int n);

int main () {

    int i,j;
    int **matriz = malloc(sizeof(int *) * 5);

    for (i=0; i<5; i++){
        *(matriz + i) = malloc(sizeof(int) * 5);
    }

    //Lleno la matriz con valores aleatorios
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            *(*(matriz + i) + j) =  (i + j) * 3;
        }
    }


    showMatriz(matriz);
    escalarMatriz(matriz, 2);
    printf("\n\n");
    showMatriz(matriz);



    //LIBERO MEMORIA
    for (i=0; i<5; i++){
        free(*(matriz + i));
    }

    free(matriz);

    return 0;
}

void showMatriz(int **matriz) {
    int i,j;

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%i ,", *(*(matriz + i) + j));
        }
        printf("\n");
    }
}

void escalarMatriz(int **matriz, int n){
    int i,j;

    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            *(*(matriz + i) + j) = (*(*(matriz + i) + j)) * n;
        }
        printf("\n");
    }
}

