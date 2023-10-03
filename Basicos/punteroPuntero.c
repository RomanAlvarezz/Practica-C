#include <stdio.h>

int main () {

    int n = 78;
    int **ppi;
    int *pi;
    pi = &n;
    ppi = &pi;

    //Tipo - Nombre - Direccion - Contenido
    printf("PUNTERO ppi %p | %p\n",&ppi, ppi);
    printf("PUNTERO pi %p | %p\n",&pi, pi);
    printf("ENTERO n %p | %i\n",&n, n);

    return 0;
}