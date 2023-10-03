#include <stdio.h>
#include <stdlib.h>
#define SEPARADOR() printf("\n")
/*
Malloc ---> void *malloc(int n_bytes)
Calloc --> void *calloc(int n_datos, int tamanio_dato)
Free --> void free (void *)
Si el pedido falla (Malloc/Calloc) devuelve NULL
*/

void imprimirVector(int v[], int N);

int main () {
    //Testeo de cuanto ocupa un Int
/*  int num = 54651;
    int *nump = &num;
    printf("num = %i | direccion = %p", *nump, nump);
    SEPARADOR();
    printf("num = %i | direccion = %p\n", *(nump + 1), (nump+1));
    SEPARADOR();
    printf("num = %i | direccion = %p\n", *(nump + 2), (nump+2));
    SEPARADOR();
*/
    int N = 10;

    //Con MALLOC
    int *pm;
    pm = (int *) malloc ((N)*sizeof(int)); //(int *) es el type-casting. En C no es necesario hacerlo
    int *pmtemp = pm;
    printf("El vector con malloc es:\n");
    imprimirVector(pmtemp,N);
    SEPARADOR();

    //Con CALLOC
    int *pc;
    pc = (int *) calloc(N, sizeof(int));
    int *pctemp;
    printf("El vector con calloc es:\n");
    imprimirVector(pctemp,N);

    free(pc);
    free(pm);
    return 0;
}

void imprimirVector(int v[], int N){
    for (int i=0; i<N; i++) printf("%i,", *(v+i));
}