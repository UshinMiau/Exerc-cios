#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Menu: \n");
    printf("1 - Expresso \n");
    printf("2 - Cappuccino \n");
    printf("3 - Macchiato \n");
    printf("Escolha uma opcao: \n");

    int option;
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Expresso escolhido.");
            break;

        case 2:
            printf("Cappuccino escolhido.");
            break;

        case 3:
            printf("Macchiato escolhido.");
            break;
        
        default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}