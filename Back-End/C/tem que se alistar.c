#include <stdio.h>
#include <stdlib.h>

int main() {

    int age;

    printf("Digite sua idade: ");
    scanf("%d", &age);

    if (age > 18) {
        printf("Voce e maior de idade e nao tem que se alistar!");
    }
    else if (age == 18) {
        printf("Voce e maior de idade e tem que se alistar!");
    }
    else {
        printf("Voce e menor de idade!");
    };

    return 0;
}