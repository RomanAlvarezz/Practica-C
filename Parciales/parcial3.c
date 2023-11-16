#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define L 3
#define ESPACIO() printf("\n")

typedef struct alumno {
    int matricula;
    char nombre[20];
    char carrera[4];
    float promedio;
    char direccion[20];
} Alumno;

struct alumno * nomina[L];

void cargarAlumnos(struct alumno * alumnos[L]);
//fgets(frase, L, stdin);

int main () {
    char carrera[3];
    int matricula;
    int i;
    for (i=0; i<L; i++){
        nomina[i] = malloc(sizeof(struct alumno));
    }

    //alumno 1
    // nomina[0]->nombre[0] = "juan";
    strcpy((*(nomina)).nombre, "juan");
    printf("%s", (*(nomina)).nombre);
    
    //printf("Ingrese una carrera para listar alumnos (AUS - TUC - TUQ) : ");
    //scanf("%s", &carrera);
    //listaPorCarrera(carrera,Nomina);
    //cantPorCarrera(Nomina);
    //printf("Ingrese una matricula para buscar: ");
    //scanf("%i", matricula);
    //buscarAlumno(Nomina);

    return 0;
}

// void cargarAlumnos(struct alumno * alumnos[L]){
//     int i;
//     for (i=0; i<L; i++){
//         ESPACIO();
//         printf("Alumno %d", i+1);
//         ESPACIO();
//         printf("Ingrese nombre: \n> ");
//         scanf("%s", alumnos[i]->nombre);
//         ESPACIO();
//         printf("Ingrese carrera (AUS - TUC - TUQ): ");
//         scanf("%s", alumnos[i]->carrera);
//         //ESPACIO();
//         printf("Ingrese direccion: ");
//         scanf("%s", alumnos[i]->direccion);
//         //ESPACIO();
//         printf("Ingrese matricula: ");
//         scanf("%i", &alumnos[i]->matricula);
//         //ESPACIO();
//         printf("Ingrese promedio: ");
//         scanf("%i", &alumnos[i]->promedio);
//         //ESPACIO();
//     }

//     printf("matricula Alumno 2 = %d", alumnos[1]->matricula);
// }