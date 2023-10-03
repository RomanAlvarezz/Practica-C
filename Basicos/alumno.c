#include <stdio.h>
#include <string.h>

struct alumno{
    int matricula;
    char nombre[20];
    char carrera[20];
    float promedio;
    char direccion[20];
};

int main(){
    struct alumno a1={120,"Maria","Contabilidad",8.9,"Queretaro"},a2;
    printf("\nIngrese la matricula del alumno 2:");
    scanf("%d" , &a2.matricula);
    //printf("\n%c ", a2.matricula[5]);
    getc(stdin); // desecha el enter ingresado
    printf("\nIngrese el nombre del alumno 2:");
    fgets(a2.nombre, 20, stdin);
    printf("\nIngrese la carrera del alumno 2:");
    fgets(a2.carrera, 20, stdin);
    printf("\nIngrese el promedio del alumno 2:");
    scanf("%f",&a2.promedio);
    getc(stdin); // desecha el enter ingresado
    printf("\nIngrese la direccion del alumno 2:");
    fgets(a2.direccion, 20, stdin);
    printf("\nDatos del alumno 1\n");
    printf("%d\n",a1.matricula);
    printf("%s\n", a1.nombre);
    printf("%s\n",a1.carrera);
    printf("%.2f\n",a1.promedio);
    printf("%s\n",a1.direccion);
    printf("\nDatos del alumno 2\n");
    printf("%d\n",a2.matricula);
    printf("%s\n",a2.nombre);
    printf("%s\n",a2.carrera);
    printf("%.2f\n",a2.promedio);
    printf("%s\n",a2.direccion);
return 0;

}