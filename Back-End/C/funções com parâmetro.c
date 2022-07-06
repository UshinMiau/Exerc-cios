#include <stdio.h>
#include <stdlib.h>

void imprimeSoma(int a, int b) {
    printf("\nSoma: %d\n", a + b);
}

int retornaSoma(int a, int b) {
    int soma = a + b;
    return soma;
}

float retornaComMais10(float a) {
    return a + 10.0;
}

int main() {

    int valor1, valor2;

    printf("Insira 2 valores inteiros: \n");
    scanf("%d %d", &valor1, &valor2);

    imprimeSoma(valor1, valor2);

    printf("\nO resultado da soma 20 + 30: %d\n\n", retornaSoma(20, 30));

    float valorFinal = retornaComMais10(15.5);
    printf("Valor com mais 10: %f\n", valorFinal);

    return 0;
}