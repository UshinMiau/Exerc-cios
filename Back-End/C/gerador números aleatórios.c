#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL));

    //cria um numero aleatorio de 0 a 9
    //int r = rand() % 10;
    
    //cria um numero aleatorio de 5 a 14
    //int r = (rand() % 10) + 5;

    int max = 14;
    int min = 5;

    int r = (rand() % (max - min + 1)) + min;

    printf("Numero gerado: %d", r);

    return 0;
}