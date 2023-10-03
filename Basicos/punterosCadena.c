#include <stdio.h>

int main() {

    char cadena1[10];

    scanf("%s", cadena1);
    cadena1[1] = 'w';
    printf("%s\n", cadena1);

    char *cadena2 = "Hola";
    //*(cadena2 + 2) = 'w';
    //printf("%s\n", cadena2);
    //*(cadena2+1) = 's';
    //printf("%c", *(cadena2+1));

    // arr[i] === *(parr + i)
    //char cadena3[] = { 'H', 'o', 'l', 'a', '\0' };

    //*(cadena2 + 1) = 'm';
    //char cadena4[] = "Chau";

    // printf("%s\n", cadena3);

    // char *cadena5[] = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo" };
    // printf("%s\n", cadena5[6]);

    return 0;
}

