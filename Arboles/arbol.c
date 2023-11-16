#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    char dato;
    struct nodo* izq;
    struct nodo* der;
}arbol;

arbol* raiz;

void inserta (char , arbol**);
int miembro (char , arbol* );
char suprime_min (arbol**);
void suprime (char , arbol**);
void lista (arbol* );
arbol* nuevonodo(char);
void borrarnodo(arbol**);

void borrarnodo(arbol** A){
    if (*A != NULL)
        free(*A);
}

arbol* nuevonodo(char x)
{

    arbol* nuevo;
    nuevo = (arbol*) malloc(sizeof(arbol));
    if (nuevo == NULL)
        return NULL;

    nuevo->dato = x;
    nuevo->izq = NULL;
    nuevo->der = NULL;

    return nuevo;
}

void inserta (char x, arbol** A)
{
    if (*A == NULL) {       
        *A = nuevonodo(x);

        printf("Nodo insertado!! \n");
    }
    else
        if (x < (*A)-> dato)
            inserta (x, &(*A)->izq);
        else
            if (x > (*A)-> dato)
                inserta (x, &(*A)->der);

}

int miembro (char x, arbol* A)
{
    if (A == NULL)
        return (0);
    else
        if (A->dato == x)
            return (1);
    else
        if (A->dato > x)
            return (miembro (x, A->izq));
    else
        if (A->dato < x)
            return (miembro (x, A->der));

    return 0;

}

char suprime_min (arbol** A)
{
    char z;
    if ((*A)->izq == NULL){
        z = (*A)->dato;
        *A = (*A)->der;
    }
    else
        z = suprime_min (&(*A)->izq);
    
    return (z);

}

void suprime (char x, arbol** A)
{
    if (*A != NULL){
        if (x < (*A)->dato)
            suprime (x, &(*A)->izq);
        
        else
            if (x > (*A)->dato)
                suprime (x, &(*A)->der);
        
        else
            if ((*A)->izq == NULL &&  (*A)->der == NULL){
                borrarnodo(A);
                //A = NULL;
            }
        /* Ya lo encontre */
        else
            if ((*A)->izq == NULL)
                (*A) = (*A)->der;

        else
            if ((*A)->der == NULL)
                (*A) = (*A)->izq;
        
        else {/* si los dos miembros estan presentes */
            (*A)->dato = suprime_min (&(*A)->der);
        }
    }
    
}

void lista (arbol* Ar)
{
    arbol* tmp= Ar;
    if (tmp != NULL){
        lista(tmp->izq);
        printf("%c, ", tmp->dato);
        lista (tmp->der);
                    
    }

}

int main(){
    arbol *raiz = NULL;

    // printf("%p", raiz);
    // printf("\n");
    // printf("%p", &raiz);
    inserta ('c', &raiz);
    inserta ('a', &raiz);
    inserta ('j', &raiz);
    inserta ('g', &raiz);
    inserta ('h', &raiz);
    inserta ('k', &raiz);

    lista(raiz);
    printf("\n");

    suprime('j', &raiz);

    lista(raiz);
    printf("\n");


}