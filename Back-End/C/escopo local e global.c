#include <stdio.h>
#include <stdlib.h>

int escopoGlobal = 20;

void imprimeA() {
    int a = 10;
    printf("Valor de A na funcao: %d\n", a);
    escopoGlobal = 50;
}

int main() {

    int a = 15;
    printf("Valor de A fora da funcao: %d\n", a);
    printf("Valor do Escopo Global: %d\n", escopoGlobal);

    imprimeA();

    printf("Valor de A fora da funcao: %d\n", a);
    printf("Valor do Escopo Global NOVO: %d\n", escopoGlobal);

    return 0;
}