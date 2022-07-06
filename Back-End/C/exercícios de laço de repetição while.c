#include <stdio.h>
#include <stdlib.h>

int main() {

    //EX1:
/*
    int i = 50;

    while (i > 0) {
        printf("%d \n", i);
        
        i-=6;
    }
*/

    //EX2:
/*
    int i = 10;
    int maximo;

    printf("Digite um valor maximo: ");
    scanf("%d", &maximo);

    while (i < maximo) {

//        if (i % 2 == 0) {
//            printf("%d ", i);
//        }

//        i++;
        
        printf("%d ", i);

        i+=2;
    }
*/

    //EX3:
/* 
    int x, y, soma;

    while (!(x < 10 && x > 5) || !(y < 10 && y > 5)) {
        printf("\nDigite valores entre 5 e 10. \n");

        printf("Digite um valor para x: ");
        scanf("%d", &x);

        printf("Digite um valor para y: ");
        scanf("%d", &y);
    }
    
    soma = x + y;

    printf("A soma de x e y e: %d.", soma);
*/
    return 0;
}