#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, result, option;

    printf("Digite 2 valores: \n");
    scanf("%d %d", &x, &y);

    printf("O que vai querer fazer? \n");
    printf("1 - Somar \n");
    printf("2 - Subtrair \n");

    scanf("%d", &option);

    switch (option){
        case 1:
            result = x + y;
            break;

        case 2:
            result = x - y;
            break;
        
        default:
            printf("Opcao invalida!");
            break;
    }

    printf("Resultado: %d", result);

    return 0;
}