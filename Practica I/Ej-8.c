#include <stdio.h>
//Arreglo de palabras
char * getDay(int day, char *week[]);

int main () {
    int day;
    char *cp;
    char *days[] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo","Na que ve"};
    //otra manera de crear el arreglo de dias
    char *days2[8];
    char d1[] = "Lunes";
    char *d2 = "Martes";
    char *d3 = "Miercoles";
    char *d4 = "Jueves";
    char *d5 = "Viernes";
    char *d6 = "Sabado";
    char *d7 = "Domingo";
    char *comodin = "Na que ve";
    days2[0] = &d1[0];
    days2[1] = d2;
    days2[2] = d3;
    days2[3] = d4;
    days2[4] = d5;
    days2[5] = d6;
    days2[6] = d7;
    days2[7] = comodin;


    printf("Ingrese numero de dia: \n> ");
    scanf("%i", &day);
    printf("\n");
    cp = getDay(day, days2);
    printf("%s", cp);

    return 0;
}

char * getDay(int day, char *week[]) {
    if (day<1 || day>7){
        return week[7];
    }
    return week[(day - 1)];
}