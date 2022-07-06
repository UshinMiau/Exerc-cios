#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* ------ VOCABULARY------ 

    -isalpha = a função isalpha() verifica se um caractere é um alfabeto (a a z e AZ) ou não. Se um caractere passado para isalpha() for um alfabeto, ele retornará um inteiro diferente de zero, caso contrário, retornará 0. A isalpha()função é definida no arquivo de cabeçalho <ctype.h>.

    -tolower = transforma todas as letras em minúsculas

    -toupper = transforma todas as letras em maiúsculas

*/
int main() {

    char A;

    printf("\n\nDIGITE UMA LETRA: ");
    scanf("%c", &A);

    if (isalpha(A) == 0) {
        printf("\nNao e uma letra! Programa Cancelado!\n\n");
        return 0;
    }

    A = tolower(A); //toupper()

    switch (A) {

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nVogal\n");
            break;

        default:
            printf("\nConsoante\n");
            break;
    };

    return 0;
}