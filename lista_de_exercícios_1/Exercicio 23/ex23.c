#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/*23. Fa�a um programa para ler um n�mero inteiro, positivo de tr�s d�gitos, e gerar outro
n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
N�meroLido = 123
N�meroGerado = 321 */

int main (void) {
    int NumeroLido, NumeroGerado[3], tamanho = 0;

    printf("Digite um numero de tr�s digitos: \n");

    printf("\nNumero lido: ");
        scanf("%i", &NumeroLido);

    for (int i = 0; NumeroLido != 0 ; i++) {
            NumeroGerado[i] = NumeroLido % 10;
            NumeroLido /= 10;
            tamanho++;
    }
    printf("\nNumero gerado: ");
    for (int i = 0; i < tamanho; i++){
        printf("%i", NumeroGerado[i]);
    }
    printf("\n\n");

}

