#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main() {
    
    //atribuir valores para um vetor ja criado:
    //vetor[X] = 10;

    //para receber um valor de um vetor ja criado:
    //int variavel = vetor[X];

    //para ler um valor dentro de uma posicao do vetor:
    //scanf("%d", &vetor[X]);

    //para imprimir um valor de uma posicao do vetor:
    //printf("%d", vetor[X]);


    int vetor1[] = {1, 2, 3, 4};
    float vetor2[3] = {1.5, 2.5, 3.5};
    char vetor3[TAM] = {'a', 'b', 'c'};

    printf("%d \n", vetor1[2]);
    printf("%.2f \n", vetor2[1]);
    
    for (int i = 0; i < TAM; i++) {
        printf("%c \n", vetor3[i]);
    }

    return 0;
}