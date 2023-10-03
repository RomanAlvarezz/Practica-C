
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pos {
    int latitud;
    int longitud;
} Pos;

int main () {
    Pos *mipos;
    mipos = malloc(100 * sizeof(struct pos)); // sizeof(Pos)
    Pos *tmp = mipos;
    mipos->latitud = 1024;
    mipos->longitud = 2048;
    mipos++;
    mipos->latitud = 20;
    mipos->longitud = 30;
    mipos++;

    free(mipos);
    return EXIT_SUCCESS;
}
