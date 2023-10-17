#include <stdio.h>

typedef struct nroPreciso{
    char signo;
    unsigned char num_bytes;
    unsigned char * bytes;
} Np;

//Np * sumaNroPreciso(Np * i1, Np * i2);

int getNroPreciso(unsigned char * arr, unsigned char l);

int main () {

    unsigned char n1arr[3]= {3,9,5};
    Np n1;
    n1.signo = -1;
    n1.num_bytes = 3;
    n1.bytes = n1arr;

    unsigned char n2arr[2]= {2,1};
    Np n2;
    n2.signo = 1;
    n2.num_bytes = 2;
    n2.bytes = n2arr;


    //printf("El segundo dígito es: %d\n", segundoDigito);

    //printf("numero = %i", getNroPreciso(n1.bytes, n1.num_bytes));

    return 0;
}

//Np * sumaNroPreciso(Np * i1, Np * i2);

int getNroPreciso(unsigned char * arr, unsigned char l) {
    int i,j;
    int nro = 0;
    int contadorCeros = l - 1;
    int multiplicador = 1;

    // Formar el número con 1 seguido de la cantidad de ceros correspondientes
    while (contadorCeros > 0) {
        multiplicador *= 10;
        contadorCeros--;
    }

    //printf("%i \n", multiplicador);

    for (i=0; i<l; i++) {
        printf("%i \n", (*(arr + i)) * multiplicador);
        nro += multiplicador * (*(arr + i));
        multiplicador = multiplicador / 10;
    }

    return nro;
    //return 1;
}