
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct {
    int latitud;
    int longitud;
    char nombre[20];
} pos;

int main () {

    pos **pt = (pos**) malloc(sizeof(pos*) * MAX);

    for (int i = 0; i < MAX; i++) {
        *(pt + i) = (pos*) malloc(sizeof(pos));
    }

    for (int i = 0; i < MAX; i++) {
        (**(pt + i)).latitud = (i + 1) * 10;
	(*(pt + i))->longitud = (i + 1) * 15;
	//(*(pt + i)).nombre = (char*) malloc(sizeof(char) * 50);
	scanf("%20s", pt[i]->nombre); // (*(pt + i))->nombre
    }

    for (int i = 0; i < MAX; i++) {
        printf("nombre: %s\n", (*(pt + i))->nombre);
        printf("latitud: %d\n", (*(pt + i))->latitud);
	printf("longitud: %d\n", (*(pt + i))->longitud);
    }

    for (int i = 0; i < MAX; i++) {
        free(*(pt + i)); // free(pt[i]);
    }
    free(pt);
    return EXIT_SUCCESS;

}

