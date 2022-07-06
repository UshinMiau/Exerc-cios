#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //char palavra1[] = "boi";
    //char palavra2[5] = "bala";
    //char palavra4[5] = {'f', 'o', 'n', 'e', '\0'};
    //char palavra3[] = {'a', 'b', 'c', 'd', '\0'};

    //para IMPRIMIR >SEM< espaco, usamos:
    //printf("%s", nomeDaString); 
    //aqui nao colocamos '&'

    //para IMPRIMIR >COM< espaco, usamos:
    //puts(nomeDaString);

    //antes de LER strings, e importante limpar o BUFFER de leitura do teclado, usando:
    //fflush(stdin);

    //para LER strings >SEM< espaco, usamos:
    //scanf("%s", nomeDaString);

    //para  LER strings >COM< espaco, usamos:
    //fgets(nomeDaString, sizeof(nomeDaString), stdin);
    //a funcao FGETS foi criada para ler strings e recebe 3 parametros:
    //(nomeDaString, tamanhoMaximo, porOndeSeraFeitaALeitura)

/*
    char palavra[5];

    printf("Digite uma palavra com ate 4 letras: ");
    fflush(stdin);
    scanf("%s", palavra);
    printf("A palavra dita foi %s.", palavra);
*/

/*
    char fruta[50];

    fflush(stdin);
    printf("Digite o nome de uma fruta: ");
    fgets(fruta, sizeof(fruta), stdin);

    printf("A fruta lida foi: ");
    puts(fruta);
*/

    return 0;
}