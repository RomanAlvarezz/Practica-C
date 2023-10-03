#include <stdio.h>
#define R 4
#define C 4

void calculateStudentProm(float M[R][C]);
void calculateSuubjectProm(float M[R][C]);

int main() {

    float examsResults[R][C] = {
        {10,9,8,7.4},
        {5,4,3,6},
        {6.4,5,7,8.2},
        {6,8.2,6.4,5.6}
    };

    calculateStudentProm(examsResults);
    calculateSuubjectProm(examsResults);

    return 0;
}

void calculateStudentProm(float M[R][C]) {
    int i, j;
    float acum;

    for (i=0; i<R; i++) {
        acum = 0.0;
        for (j=0; j<C; j++) {
            acum += M[i][j];
            printf("%.1f |", M[i][j]);
        }
        printf(" --> %.2f", acum / C);
        printf("\n");
    }
}

void calculateSuubjectProm(float M[R][C]) {
    int j, i;
    float acum;

    for (j = 0; j<C; j++) {
        acum = 0.0;
        for (i=0; i<R; i++) {
            acum += M[i][j];
        }
        printf("%.2f |", acum / R);
    }
}