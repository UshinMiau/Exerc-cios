#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    int dado1, dado2, dado3, soma;

    dado2 = (rand() % 6) + 1;
    dado3 = (rand() % 6) + 1;
    dado1 = (rand() % 6) + 1;
    soma = dado1 + dado2 + dado3;

    printf("Dado 1: %d\n", dado1);
    printf("Dado 2: %d\n", dado2);
    printf("Dado 3: %d\n", dado3);
    printf("Resultado da soma: %d\n", soma);

    return 0;
}