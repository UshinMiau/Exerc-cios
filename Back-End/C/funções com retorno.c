#include <stdio.h>
#include <stdlib.h>

int return10() {
    int a = 10;
    return a;
}

float returnFloat() {
    float a = 5.5;
    return a;
}

char returnLetter() {
    return 'a';
}

int main() {
    
    printf("Retorna 10 da funcao: %d\n", return10());

    float numeroQuebrado = returnFloat();
    printf("Numero quebrado: %f\n", numeroQuebrado);

    printf("Retorna letra: %c\n", returnLetter());

    return 0;
}