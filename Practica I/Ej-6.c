#include <stdio.h>

int main() {

    int i = 5, j[] = {1,2,3,4,5,6,7,8,9,10};
    int *pj = j;
    char x = 'a', pal[] = "texto en c";
    char *ppal = &pal[0];
    int *pi = &i;
    char *pc = &x;
    int *pca = &j[0];

    printf("Variable `i` | Direccion: %p | Valor: %i", pi, *pi);
    printf("\n");
    printf("Variable `x` | Direccion: %p | Valor: %c", pc, *pc);
    printf("\n");
    // printf("Variable `j[]` | Direccion: %p | Valor: %i", pca, *pca);

    for(int z=0; z<9; z++){
        printf("j[k] | Valor = %i | Direccion = %p", *(pj+z), pj+z);
        printf("\n");
    }

    printf("\n");

    for(int z=0; z<10; z++){
        //printf("j[k] | Valor = %i | Dirección = %p", *(pj+z), pj+z);
        //printf("\n");
        printf("%c", *(ppal + z));
    }

    return 0;
}