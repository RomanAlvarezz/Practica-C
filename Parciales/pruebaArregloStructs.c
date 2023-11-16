#include <stdio.h>

// Definición de la estructura
struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    int numPersonas;
    printf("Ingrese el número de personas: ");
    scanf("%d", &numPersonas);

    // Crear un array de estructuras Persona
    struct Persona personas[numPersonas];

    // Leer los datos para cada persona
    for (int i = 0; i < numPersonas; ++i) {
        printf("Ingrese el nombre de la persona %d: ", i + 1);
        scanf("%s", personas[i].nombre); // Cargar el nombre en la estructura

        printf("Ingrese la edad de la persona %d: ", i + 1);
        scanf("%d", &personas[i].edad); // Cargar la edad en la estructura
    }

    // Mostrar los datos almacenados en las estructuras
    printf("\nDatos de las personas:\n");
    for (int i = 0; i < numPersonas; ++i) {
        printf("Persona %d - Nombre: %s, Edad: %d\n", i + 1, personas[i].nombre, personas[i].edad);
    }

    return 0;
}