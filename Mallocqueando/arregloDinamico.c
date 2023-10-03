#include <stdio.h>
#include <stdlib.h>

int main () {

    int l;
    printf("Ingrese la longitud del arreglo dinamico:\n>");
    scanf("%i", &l);

    int *pi = (int *) malloc(sizeof(int) * l);
    //int *piFijo = pi;

    printf("pi = %p\n", pi);
    //printf("piFijo = %p\n\n", piFijo);

    for (int i = 0; i<l; i++){
        printf("\n*(pi + %i) = ", i);
        scanf("%i", (pi + i));
    }

    printf("\n");
    
    for (int j = 0; j<l; j++){
        printf("*(pi + %i) = %i\n", j,*(pi + j));
    }

    printf("\n");

    printf("pi = %p\n", pi);
    //printf("piFijo = %p\n\n", piFijo);

    free(pi);
    return 0;
}