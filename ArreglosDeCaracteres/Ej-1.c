#include <stdio.h>
#include <conio.h>
#define ESPACIO() printf("\n") 
#define W 100

int stringLength(char word[W]);
int letterLength(char word[W]);
void reverseString(char word[W], int limit);

int main() {

    char cadena[W];
    int cantidadCaracteres = 0, letrasCantidad = 0;
    int asciNumber = 0;
    
    printf("Ingresa una palabra: ");
    scanf("%[^\n]", &cadena);
    fflush(stdin);
    ESPACIO();
    // printf("Palabra ingresada: %s", cadena);
    cantidadCaracteres = stringLength(cadena);
    letrasCantidad = letterLength(cadena);
    for (int i = 0; i<cantidadCaracteres; i++){
        asciNumber = 0 + cadena[i];
        printf("%c | %i\n", cadena[i], asciNumber);
    }
    // printf("La palabra ingresada tiene %i letras", cantidadCaracteres);
    // ESPACIO();
    // printf("La palabra al reves: ");
    // reverseString(cadena, cantidadCaracteres);

    return 0;
}

int stringLength(char word[W]){
    int i = 0;

    while (word[i] != '\0') {
        i++;
    }

    return i;
}

int letterLength(char word[W]){
    int i = 0, ascicode = 0;

    while (word[i] != '\0') {
        ascicode = 0 + word[i];
        if ((ascicode > 96 && ascicode < 123) || (ascicode > 64 && ascicode < 91)){
            i++;
        }
    }

    return i;
}

void reverseString(char word[W], int limit) {
    int i = limit;

    while (i != -1) {
        printf("%c", word[i]);
        i--;
    }
}