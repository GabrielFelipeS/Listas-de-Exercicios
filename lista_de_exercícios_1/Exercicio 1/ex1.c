#include <stdio.h>

/* 1. Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e tamb�m o imprima. */

int main (void) {
    int num_int;
    float num_real;

    //Pergunta pro usuario um numero inteiro e o armazena
    printf("Digite um numero inteiro: ");
        scanf("%i", &num_int);

    //Imprime o numero inteiro digitado
    printf("Numero inteiro digitado: %i", num_int);

    //Pergunta pro usuario um numero real e o armazena
    printf("\nDigite um numero real: ");
        scanf("%f", &num_real);

    //Imprime o numero real digitado
    printf("\nNumero real digitado: %.2f", num_real);

}
