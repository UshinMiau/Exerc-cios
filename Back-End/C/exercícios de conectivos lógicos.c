#include <stdio.h>
#include <stdlib.h>

int main() {

    //EX1: 
/*
    int a;

    scanf("%d", &a);

    if (a > 0 && a < 10) {
        printf("O numero esta entre 0 e 10!");
    }
    else {
        printf("O numero nao esta entre 0 e 10!");
    }
*/

    //EX2: 
/*
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 10 && b > 10 && c > 10) {
        printf("Todos os numeros sao maiores do que 10!");
    }
    else {
        printf("Nem todos os numeros sao maiores do que 10!");
    }
*/

    //EX3:
/*
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > 10 || b > 10) {
        printf("Algum numero ou todos sao maiores do que 10!");
    }
    else {
        printf("Nenhum numero e maior do que 10!");
    }
*/

    //EX4: 
/*
    int a, b;
    scanf("%d %d", &a, &b);

    if ((a % 2 == 0) || (b % 2 == 0)){
        printf("Algum numero ou todos sao pares!");
    }
    else {
        printf("Nenhum dos numero e par!");
    }
*/

    //EX5:
/*
    int a, b, soma;
    scanf("%d %d", &a, &b);
    soma = a + b;

    if ((soma > 0 && soma < 10) || (soma % 2 == 0)) {
        printf("Esta entre 0 e 10 ou e par!");
    }
    else {
        printf("Nao esta entre 0 e 10 e e impar!");
    }
*/

    return 0;
}