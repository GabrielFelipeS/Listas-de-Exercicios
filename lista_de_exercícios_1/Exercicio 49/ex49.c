#include <stdio.h>

/*
Ler um valor de comprimento em metros e apresentá-lo convertido em jardas. A fórmula
de conversão é: 𝐽 = 𝑀/0,91 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.
*/
int main (void) {
    float M;

    printf("Digite o valor em metros: ");
        scanf("%f", &M);

    float J = M/0.91;

    printf("\nO valor convertido em jardas: %.2f\n", J);
}



