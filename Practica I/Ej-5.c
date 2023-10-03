#include <stdio.h>

int main() {

    int i = 8, *pi = &i;
    char l = 'c', *ld = &l;
    char l2 = 'c', *ld2 = &l2;
    double doble = 234234.55, *dp = &doble;
    char l3 = 'c', *ld3 = &l3;

    printf("Variable int | Tamanio en bytes = %d | Puntero = %p | Valor = %d", sizeof(i), &i, i);
    printf("\n");
    printf("Variable char | Tamanio en bytes = %d | Puntero = %p | Valor = %c", sizeof(l), &l, l);
    printf("\n");
    printf("Variable char 2 | Tamanio en bytes = %d | Puntero = %p | Valor = %c", sizeof(l2), &l2, l2);
    printf("\n");
    printf("Variable double | Tamanio en bytes = %d | Puntero = %p | Valor = %f", sizeof(doble), &doble, doble);
    printf("\n");
    printf("Variable char 3 | Tamanio en bytes = %d | Puntero = %p | Valor = %c", sizeof(l3), &l3, l3);

    return 0;
}