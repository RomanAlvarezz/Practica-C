#include <stdio.h>
#include <stdlib.h>
#define ESPACIO() printf("\n")
#define L 50

typedef struct char_string {
    char c;
    char *cadena;
} char_string;

int cantidad(char_string *pcs);
int* ocurrencias(char_string *pcs, int cantidad);


int main(){

    char frase[L];
    char letra;

    printf("Ingrese una frase: ");
    fgets(frase, L, stdin);
    ESPACIO();
    printf("Ingrese una letra: ");
    scanf(" %c", &letra);
    ESPACIO();
    char_string *pc = malloc(sizeof(char_string*));
    (*pc).c = letra;
    (*pc).cadena = frase;
    printf("Letra: %c | Frase: %s", (*pc).c, (*pc).cadena);
    ESPACIO();
    int apariciones = cantidad(pc);
    printf("Cantidad de veces que aparece la letra %c: %i", (*pc).c,apariciones);
    ESPACIO();
    int *ocu = ocurrencias(pc, apariciones);
    printf("La letra '%c' aparece en las posiciones ", (*pc).c);
    for(int i=0; i<apariciones; i++){
        printf("|%i|", *(ocu + i));
    }



    free(ocu);
    free(pc);
    return 0;
}

int cantidad(char_string *pcs){
    int i;
    int cont = 0;

    for (i=0; i<L; i++){
        if ((*pcs).cadena[i] == (*pcs).c){
            cont++;
        }
    }

    return cont;
}

int* ocurrencias(char_string *pcs, int cantidad){
    int *ocu = (int*) malloc(sizeof(int)*cantidad);
    int i;
    int cont = 0;

    for (i=0; i<L; i++){
        if ((*pcs).cadena[i] == (*pcs).c){
            ocu[cont] = i;
            cont++;
            //printf("|%i| ", ocu[i]);
        }
    }

    return ocu;
}