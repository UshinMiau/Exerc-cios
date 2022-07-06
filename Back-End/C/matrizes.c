#include <stdio.h>
#include <stdlib.h>

#define TAM 3
#define LINHA 2
#define COLUNA 3

int main() {

    //int matriz[][] = {{1, 2}, {3, 4}};
    //float matriz[2][2] = {{1.5, 2.5}, {2.5, 3.5}};
    //char matriz[TAM][TAM] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};

    //para atribuir valores a uma matriz ja criada, usamos:
    //matriz[x][y] = 10;

    //para receber um valor de uma matriz ja criada, usamos:
    //int variavel = matriz[x][y];

    //para ler um valor dentro de uma posicao da matriz, usamos:
    //scanf("%d", &matriz[x][y]);
    
    //para imprimir um valor de uma posicao da matriz, usamos:
    //printf(%d, matriz[x][y]);

    int linha = 2;
    int coluna = 3;

    int matriz[linha][coluna];

    int i, j;

    for (i = 0; i < linha; i++) {

        for (j = 0; j < coluna; j++) {
            scanf("%d", &matriz[i][j]);
        }

        printf("\n");

    }

    for (i = 0; i < linha; i++) {

        for (j = 0; j < coluna; j++) {
            printf("%d ", matriz[i][j]);
        }

        printf("\n");

    }

    return 0;
}