#include <stdio.h>
#include <stdlib.h>

int valor = 0;

void adicionaUmAte10() {
    if (valor < 10) {
        printf("%d\n", valor);
        valor++;
        adicionaUmAte10();
    }
}

int main() {

    adicionaUmAte10();
    
    printf("Fim.");

    return 0;
}