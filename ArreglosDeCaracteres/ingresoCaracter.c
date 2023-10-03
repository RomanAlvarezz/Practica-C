#include <stdio.h>
#include <conio.h>
#define ESPACIO() printf("\n") 

int main() {

int asciNumber;
    // char caracter;

    // printf("Ingrese un carcater: ");

    // caracter = getchar();

    // ESPACIO();
    // ESPACIO();

    // printf("El caracter ingresado es '%c'",  caracter);

    char cadena[100];
    
    printf("Pone tu nombre completo: ");
    scanf("%[^\n]", &cadena);
    fflush(stdin);
    ESPACIO();
    printf("Vo te llama %s\n", cadena);
    for (int i = 0; i<20; i++){
        asciNumber = 0 + cadena[i];
        printf("%c | %i\n", cadena[i], asciNumber);
    }

    return 0;
}