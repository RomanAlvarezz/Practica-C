#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    void *pt = malloc(2);
    char *pc = (char*) pt;
    int *pi = (int*) pt;

    //char *pchar = (char*) malloc(sizeof(char) * 2);

    char *pchar = malloc(sizeof(char) * 2);

    char *tmp = pchar;
    //pchar += 1;
    //tmp += 1;
    printf("%p\n", pchar); 
    //*pchar = "hola"; 
    strcpy(pchar, "h");
    printf("%s\n", pchar);
    char c = 'A';
    int i = (int) c; // operador cast
    printf("%d\n", i);

    pchar = realloc(pchar, sizeof(char) * 100);

    char *nchar = calloc(200, sizeof(int));

    int michar = 'A';

    printf("%d\n", *(nchar + 10));

    free(pchar);
    free(nchar);
    return EXIT_SUCCESS;
}
