#include <stdio.h>
#include <string.h>
#define SEPARADOR() printf("\n")

struct notas {
    int analisis;
    int taller1;
    int algoritmos;
} Notas;

struct alumno {
    char nombre[20];
    char apellido[20];
    int edad;
} Alumno;

void ingresarNotas(struct notas *alumno);
void ingresarNotasArray(struct notas alumnos[]);
void mostrarNotas(struct notas alumno);

int main () {
//Ingreso y muestro de nombres
/* 
    struct alumno a1;
    struct alumno a2;
    struct alumno a3;

    printf("Nombre del alumno 1: ");
    scanf("%s", a1.nombre);
    SEPARADOR();
    printf("Nombre del alumno 2: ");
    gets(a2.nombre);
    strcpy(a3.nombre, "jose");

    SEPARADOR();

    printf("%s\n", a1.nombre);
    printf("%s\n", a2.nombre);
    printf("%s\n", a2.nombre);
*/   

    struct notas juan;
    struct notas alumnos[3];

    ingresarNotas(&juan);
    SEPARADOR();
    ingresarNotasArray(alumnos);
    SEPARADOR();
    mostrarNotas(juan);

    return 0;
}

void ingresarNotas(struct notas *alumno){
    printf("Ingrese notas");
    SEPARADOR();
    printf("Analisis: ");
    scanf("%i", &alumno->analisis);
    SEPARADOR();
    printf("Taller I: ");
    //scanf("%i", (*alumno).taller1); esto esta mal porque estoy accediendo al contenido y NO al lugar donde quiero guardar la varibale
    scanf("%i", &alumno->taller1);
    SEPARADOR();
    printf("Algoritmos: ");
    scanf("%i", &alumno->algoritmos);

    printf("Las notas del alumno son\nAnalisis = %i,\nTaller = %i,\nAlgoritmos = %i", alumno->analisis,alumno->taller1, alumno->algoritmos);
    SEPARADOR();
}

void ingresarNotasArray(struct notas alumnos[]){
    printf("Ingrese notas alumno 1");
    SEPARADOR();
    printf("Analisis: ");
    scanf("%i", &alumnos[0].analisis);
    SEPARADOR();
    printf("Taller I: ");
    //scanf("%i", (*alumno).taller1); esto esta mal porque estoy accediendo al contenido y NO al lugar donde quiero guardar la varibale
    scanf("%i", &alumnos[0].taller1);
    SEPARADOR();
    printf("Algoritmos: ");
    scanf("%i", &alumnos[0].algoritmos);

    printf("Las notas del alumno son\nAnalisis = %i,\nTaller = %i,\nAlgoritmos = %i", alumnos[0].analisis,alumnos[0].taller1, alumnos[0].algoritmos);
    SEPARADOR();
}

void mostrarNotas(struct notas alumno){
    printf("Las notas del alumno son\nAnalisis = %i,\nTaller = %i,\nAlgoritmos = %i", alumno.analisis,alumno.taller1, alumno.algoritmos);
}