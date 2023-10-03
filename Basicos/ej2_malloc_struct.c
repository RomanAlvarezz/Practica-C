
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int latitud;
    int longitud;
    char nombre[20];
} pos;

int main () {

    //pos *arr[10];

    pos *pt = (pos*) malloc(sizeof(pos) * 10);

    for (int i = 0; i < 10; i++) {
        (*(pt + i)).latitud = (i + 1) * 10;
	(*(pt + i)).longitud = (i + 1) * 15;
	//(*(pt + i)).nombre = (char*) malloc(sizeof(char) * 50);
	scanf("%20s", (*(pt + i)).nombre);
    }

    for (int i = 0; i < 10; i++) {
        printf("nombre: %s\n", (*(pt + i)).nombre);
        printf("latitud: %d\n", (*(pt + i)).latitud);
	printf("longitud: %d\n", (*(pt + i)).longitud);
    }

    //int i;
    //for (i = 0; i < 10; i++) {
    //    arr[i] = (pos*) malloc(sizeof(pos)); // arr[i] === *(arr + i)
    //}

    free(pt);
    return EXIT_SUCCESS;
}

