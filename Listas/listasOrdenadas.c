#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ESPACIO() printf("\n")

typedef struct persona {
    int edad;
    char nombre[20];
    struct persona * sig;
} Persona;

Persona * insertar(Persona * top, Persona * nuevo);

void listado (Persona * top);

int main () {

    Persona * p1 = malloc(sizeof(Persona));
    strcpy(p1->nombre, "Leo Messi");
    p1->edad = 36;

    Persona * p2 = malloc(sizeof(Persona));
    strcpy(p2->nombre, "Crisitano Ronaldo");
    p2->edad = 38;

    Persona * p3 = malloc(sizeof(Persona));
    strcpy(p3->nombre, "Riquelme");
    p3->edad = 45;

    Persona * p4 = malloc(sizeof(Persona));
    strcpy(p4->nombre, "Totti");
    p4->edad = 41;

    p1->sig = p2;
    p2->sig = p3;
    p3->sig = NULL;

    Persona * top = p1;
    listado(top);
    ESPACIO();
    top = insertar(top,p4);
    listado(top);

    return 0;
}

Persona * insertar(Persona * top, Persona * nuevo) {
    Persona * actual = top;
    Persona * anterior = NULL;

    while ((actual != NULL) && (actual->edad <= nuevo->edad)){
        anterior = actual;
        actual = actual->sig;
    }

    if (anterior != NULL) {
        anterior->sig = nuevo;
        //nuevo->sig = actual;
    } else {
        top = nuevo;
        nuevo->sig = actual;
        return top;
    }
}

void listado (Persona * top) {
    Persona * p = top;
    while (p) {
        printf("%s %i", p->nombre, p->edad);
        ESPACIO();
        p = p->sig;
    }
}