#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned char R,G,B;
} RGB;

typedef struct {
    int ancho, alto;
    RGB **pixel;
} ImagenRGB;

typedef struct {
    int ancho, alto;
    RGB **pixel;
} ImagenGris;

ImagenRGB * crearImagenRGB(int ancho, int alto);

int main () {

    ImagenRGB * p_img = crearImagenRGB(600,300);

    printf("Ancho = %i, Alto = %i\n", (*p_img).ancho, (*p_img).alto);

    free(p_img);

    printf("Ancho = %i, Alto = %i\n", (*p_img).ancho, (*p_img).alto);

    return 0;
}

ImagenRGB * crearImagenRGB(int ancho, int alto){
    ImagenRGB * p_img = malloc(sizeof(ImagenRGB)); 

    (*p_img).ancho = ancho;
    (*p_img).alto = alto;

    return p_img;
}