#include <stdio.h>
#define SEPARADOR() printf("\n");

int main () {

    //vieja manera 
    char vector_caracteres[] = "Soy la vieja manera";
    printf("%s", vector_caracteres);
    SEPARADOR();
    printf("%s", &vector_caracteres[0]);
    SEPARADOR();

    //nueva manera
    char letra;
    char * cad = "Soy la nueva manera";
    letra = *cad;
    printf("%s", cad);
    SEPARADOR();
    printf("%c", letra);
    SEPARADOR();

    //Mix
    char *cad2 = &vector_caracteres[0];
    printf("%s", cad2);
    SEPARADOR();

    //practica
    printf("%c", *(cad2 + 1));
    SEPARADOR();
    char *nombre[3]; //Este necesita que le indiques el indice
    char *n1 = "Lionel";
    char *n2 = "Leandro";
    char *n3 = "Rodrigo";

    nombre[0] = n1;
    nombre[1] = n2;
    nombre[2] = n3;

    for (int i = 0; i<3; i++){
        printf("%s ", nombre[i]);
    }
    SEPARADOR();
    char *apellidos[] = { "Messi", "Paredes", "De paul"};  //Este no necesita que le indiques el indice, lo hace automatico
    for (int i = 0; i<3; i++){     //Otra manera de hacer lo mismo que en el for de arriba
        printf("%s ", apellidos[i]);
    }

    return 0;
}