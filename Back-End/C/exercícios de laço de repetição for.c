#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //EX1:
/*
    int i, soma;
    soma = 0;

    for (i = 0; i <= 10; i++) {
        printf("i = %d + %d\n", i, soma);
        soma = soma + i;
    }

    printf("Soma total: %d", soma);
*/

    //EX2:
/*
    int number, mult;

    printf("Digite o numero o qual deseja saber a tabuada: ");
    scanf("%d", &number);

    for (int i = 0; i <= 10; i++) {
        mult = number * i;
        printf("%d * %d = %d \n", number, i, mult);
    }
*/

    //EX3:
/*
    int vInicial, vFinal, vIntervalo;

    printf("Digite o valor inicial: ");
    scanf("%d", &vInicial);

    printf("Digite o valor final: ");
    scanf("%d", &vFinal);

    printf("Digite o valor do intervalo: ");
    scanf("%d", &vIntervalo);

    for (int i = vInicial; i <= vFinal; i += vIntervalo) {
        printf("%d \n", i);
    }
*/

    return 0;
}