#include <stdio.h>
#include <string.h>
#define N 3
#define SEPARADOR() printf("\n");

typedef struct tiempo {
    int anio, mes, dia;
} Tiempo;

typedef struct archivo{
    char nombre[11];
    Tiempo ultima_mod;
} Archivo;

int compara_tiempos(Tiempo *t1, Tiempo *t2);
int imprime_tiempo(Tiempo *t);
void muestro_registro(Archivo *lista, int n);

int main () {
//Testeo de las funciones compara_tiempos y imprime_tiempo
/*
    Tiempo parcial1 = {2023, 12, 17};
    Tiempo parcial2;
    parcial2.anio = 2023;
    parcial2.mes = 12;
    parcial2.dia = 28;

    imprime_tiempo(&parcial1);
    SEPARADOR();
    imprime_tiempo(&parcial2);
    SEPARADOR();

    int flag = compara_tiempos(&parcial1, &parcial2);
    switch (flag)
    {
    case 1:
        printf("T1 es anterior a T2");
        break;
    case 0:
        printf("T1 es igual a T2");
        break;
    default:
        printf("T1 es posterior a T2");
        break;
    }
*/
    
    Archivo registro[N];

    strcpy(registro[0].nombre, "ventas");
    registro[0].ultima_mod.anio = 2017;
    registro[0].ultima_mod.mes = 5;
    registro[0].ultima_mod.dia = 22;

    strcpy(registro[1].nombre, "compras");
    registro[1].ultima_mod.anio = 2023;
    registro[1].ultima_mod.mes = 9;
    registro[1].ultima_mod.dia = 18;

    strcpy(registro[2].nombre, "proveedores");
    registro[1].ultima_mod.anio = 2010;
    registro[1].ultima_mod.mes = 1;
    registro[1].ultima_mod.dia = 4;
    
    printf("%p\n", registro);
    muestro_registro(registro, 5);

    return 0;
}

int compara_tiempos(Tiempo *t1, Tiempo *t2) {
    if (t1->anio == t2->anio){
        //Sigo con mes 
        if (t1->mes == t2->mes){
            //Sigo con dias (NO VA A HABER FECHAS CON DIAS IGUALES)
            if (t1->dia > t2->dia){
                return -1;
            } else {
                return 1;
            }
        } else if (t1->mes > t2->mes) {
            return -1;
        } else {
            return 1;
        }
    } else if (t1->anio > t2->anio){
        return -1;
    } else {
        return 1;
    }
}

int imprime_tiempo(Tiempo *t){
    printf("%i/%i/%i", t->anio, t->mes, t->dia);
}

void muestro_registro(Archivo *lista, int n){
    for(int i=0; i<n; i++) printf("%s\n", lista->nombre);//el codigo esta a la mita
}