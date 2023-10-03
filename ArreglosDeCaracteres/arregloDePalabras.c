#include <stdio.h>
#include <string.h>
#define L 3
#define SEPARADOR() printf("\n")

int main () {
    char *palabras[3];
    char palabra[10];

    printf("Palabra: ");
    scanf("%[^\n]", palabra);
    //strcpy(palabra, "hola");
    printf("%s", palabra);
    SEPARADOR();
    palabras[0] = palabra;
    palabras[1] = "roman";
    //strcpy(palabras[0], palabra);
    printf("%s", palabras[0]);
    printf("%s", palabras[1]);
    // for(int i=0; i<3; i++) {
    //     printf("Palabra %i: ", i);
    //     scanf("%[^\n]", palabras[i]);
    //     fflush(stdin);
    // }

    // for (int j=0; j<3; j++) {
    //     printf("palabras[%i]=%s", j, palabras[j]);
    // }


    return 0;
}