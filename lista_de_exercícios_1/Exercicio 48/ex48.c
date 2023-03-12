#include <stdio.h>

/*
Ler um valor de comprimento em jardas e apresentá-lo convertido em metros. A fórmula
de conversão é: 𝑀 = 0,91 ∗ 𝐽 , sendo 𝐽 o comprimento em jardas e 𝑀 o comprimento em
metros.
*/
int main (void) {
    float J;

    printf("Digite o valor em jardas: ");
        scanf("%f", &J);

    float M = J * 0.91;

    printf("\nO valor convertido em metros: %.2f\n", M);
}



