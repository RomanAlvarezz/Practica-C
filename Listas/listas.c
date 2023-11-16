#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define ESPACIO() printf("\n")

typedef struct persona {
    int edad;
    char nombre[20];
    struct persona * sig;
} Persona;

void listado (Persona * top);

Persona * insertar(Persona * top, Persona * nuevo);

Persona * borrar (Persona * top);

int main() {
    Persona * p1 = malloc(sizeof(Persona));
    strcpy(p1->nombre, "Leo Messi");
    p1->edad = 36;

    Persona * p2 = malloc(sizeof(Persona));
    strcpy(p2->nombre, "Crisitano Ronaldo");
    p2->edad = 38;

    Persona * p3 = malloc(sizeof(Persona));
    strcpy(p3->nombre, "Paulo Dybala");
    p3->edad = 31;

    Persona * p4 = malloc(sizeof(Persona));
    strcpy(p4->nombre, "Riquelme");
    p4->edad = 45;

    p1->sig = p2;
    p2->sig = p3;
    p3->sig = NULL;

    Persona * top = p1;

    listado(top);
    ESPACIO();
    top = insertar(top,p4);
    listado(top);
    ESPACIO();
    top = borrar(top);
    listado(top);
    ESPACIO();
    top = borrar(top);
    listado(top);


    return 0;
}


void listado (Persona * top) {
    Persona * p = top;
    while (p) {
        printf("%s %i", p->nombre, p->edad);
        ESPACIO();
        p = p->sig;
    }
}

Persona * insertar(Persona * top, Persona * nuevo){
    Persona * p = top;
    if (top == NULL) {
        return nuevo;
    }
    while (p->sig) {
        p = p->sig;
    }
    p->sig = nuevo;

    return top;
}

Persona * borrar (Persona * top){
    Persona * p = top;
    Persona * anterior = NULL;

    if (top == NULL) {
        return top;
    }
    while (p->sig) {
        anterior = p;
        p = p->sig;
    }
    anterior->sig = NULL;
    free(p);
    
    return top;
}