#include <stdio.h>

void print(){
    printf("Wenass");
}

int main() {

    //retorno | puntero a funcion | parametros
    void (*funcion)(void);
    funcion = &print;
    (*funcion)();

    return 0;
}