#include <stdio.h>
#include <stdlib.h>

char * eco(char* cadena);
void elimFinales(char * cadenaVieja);
int ** crearMatriz(int col, int filas);

int main () {

    printf(" %s\n", eco("Eiwa"));
    elimFinales("Los rosarinos hablamos sin las eses");
    printf("\n");

    int filas = 4;
    int columnas = 3;
    int ** matrizInt = crearMatriz(columnas, filas);
    int i,j;
    for (i=0; i<filas; i++) {
        for (j=0; j<columnas; j++) {
            //*(*(m + i) + j) = i + j;
            printf("%c |", matrizInt[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void elimFinales(char * cadenaVieja) {
    int i,j;
    char cantidad_de_s=0;
    // for (i=0; cadena[i] != '\0'; i++){
    //     printf(" %c |", cadena[i]);
    // }

    while (cadenaVieja[i] != '\0'){
        // if (cad[i] = 's'){
        //     cantidad_de_s++;
        // }
        i++;
    }

    char * cadenaNueva = malloc(sizeof(char) * (i));

    for (j=0; j<i ; j++){
       if ((cadenaVieja[j+1] == ' ' || cadenaVieja[j+1] == '\0') && cadenaVieja[j] == 's'){
        //printf("Esta s debe ser borrada, pos = %i\n",j);
        cadenaNueva[j] = ' ';
       } else {
        cadenaNueva[j] = cadenaVieja[j];
       }
    }

    cadenaNueva[j] = '\0';

    printf(" %s", cadenaNueva);
}

char * eco(char* cadena) {
    int i,j;
    char ultimoChar;
    // for (i=0; cadena[i] != '\0'; i++){
    //     printf(" %c |", cadena[i]);
    // }

    while (cadena[i] != '\0'){
        i++;
    }

    ultimoChar = cadena[(i-1)];

    char * cadenaNueva = malloc(sizeof(char) * (i+5));

    for (j=0; j<(i+5) ; j++){
        if(j>(i-1)){
            cadenaNueva[j] = ultimoChar;
        } else {
            cadenaNueva[j] = cadena[j];
        }
    }

    cadenaNueva[j] = '\0';

    return cadenaNueva;
}

int ** crearMatriz(int col, int filas) {
    int i,j;

    int ** puntero_matriz =  malloc(sizeof(int *) * filas);

    for (i=0; i<filas; i++) {
        *(puntero_matriz + i) = malloc(sizeof(int) * col);
    }

    for (i=0; i<filas; i++) {
        for (j=0; j<col; j++) {
            *(*(puntero_matriz + i) + j) = i + j + 2;
        }
    }

    return puntero_matriz;
}