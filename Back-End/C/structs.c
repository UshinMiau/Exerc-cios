#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    int idade;
    float salario;
    char nome[255];
};

int main() {

    struct Pessoa pessoas[3];
    
    pessoas[0].idade = 22;
    pessoas[0].salario = 5.000;
    strcpy(pessoas[0].nome, "John");

    pessoas[1].idade = 45;
    pessoas[1].salario = 55.000;
    strcpy(pessoas[1].nome, "Heitor");

    for (int i = 0; i < 2; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("%d anos\n", pessoas[i].idade);
        printf("salario R$%f\n\n", pessoas[i].salario);
    }
    
    printf("Digite sua idade: ");
    scanf("%d", &pessoas[2].idade);

    printf("Digite seu salario: ");
    scanf("%f", &pessoas[2].salario);

    printf("Digite seu nome: ");
    fflush(stdin);
    scanf("%s", &pessoas[2].nome);
    
    printf("\nNome: %s\n", pessoas[2].nome);
    printf("%d anos, salario: R$ %f\n", pessoas[2].idade, pessoas[2].salario);


    return 0;
}