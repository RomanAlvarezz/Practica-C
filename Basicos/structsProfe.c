#include <string.h>
#include <stdio.h>

typedef struct pos {
    int latitud;
    int longitud;
} Pos;

struct alumno {
    char nombre[20];
    int notas[10];
    struct pos posicion;
} a3, a4;

typedef int mientero;

int main(void) {

    mientero v1 = 1;
    Pos posicion1 = { 1, 2 };

    printf("Latitud: %d, longitud: %d\n", posicion1.latitud, posicion1.longitud);
    strcpy(a3.nombre, "Luciano");
    a3.posicion = posicion1;


    struct alumno a1; // objeto del tipo struct alumno
    struct alumno a2; // objeto del tipo struct alumno

    a1.notas[0] = 8;
    a1.notas[1] = 7;


    printf("%s: %d, %d\n", a1.nombre, a1.notas[0], a1.notas[1]);
    return 0;
}

