#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

/*23. Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321 */

int main (void) {
    int NumeroLido, NumeroGerado[3], tamanho = 0;

    printf("Digite um numero de três digitos: \n");

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

