#include <stdio.h>

struct TipoPunto {
    double abscisa;
    double ordenada;
} coordenada;

struct TipoCiudad {
    struct TipoPunto ubicacion;
    char nombre[50];
};


int main () {
    //printf("x=%d , y=%d , %s", ciudad1.ubicacion.abscisa, ciudad1.ubicacion.ordenada, ciudad1.nombre);

    struct TipoCiudad ciudades[3];
    struct TipoCiudad ciudad1 = { 2.456, 10.485464 ,"Rosario"};
    struct TipoCiudad ciudad2 = { 15.7889556465, 50.4484 ,"Villa Gobernador Galvez"};
    struct TipoCiudad ciudad3 = { 13.89, 7.2 ,"Cordoba"};

    ciudades[0] = ciudad1;
    ciudades[1] = ciudad2;
    ciudades[2] = ciudad3;  

    return 0;
}