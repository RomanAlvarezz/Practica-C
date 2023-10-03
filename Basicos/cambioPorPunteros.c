#include <stdio.h>
#define ESPACIADOR() printf("\n")

void intercambiarValores(int *p1, int *p2);

int main () {

    int a = 1, b = 2;
    int *pa = &a, *pb = &b;

    printf("a = %i b = %i - &a = %p | &b = %p | &a = %p | &b = %p", *pa, *pb, &a, &b, pa, pb);
    printf("a = %i b = %i", *pa, *pb);
    ESPACIADOR();
    intercambiarValores(&a,&b);
    ESPACIADOR();
    printf("a = %i b = %i", a,b);

    return 0;
}

void intercambiarValores(int *p1, int *p2) {
    int comodin;

    comodin = *p2;
    *p2 = *p1;
    *p1 = comodin;    

    //printf("Direcciones de memoria:\n&a = %p | &b = %p", p1,p2);
}