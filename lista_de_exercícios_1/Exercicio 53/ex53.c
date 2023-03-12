#include <stdio.h>

/*
 Ler um valor de área em hectares e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐻 ∗ 10000 , sendo 𝑀 aárea em metros quadrados e 𝐻 a área em
hectares.
*/

int main (void) {
    float H;

    printf("Digite o valor em hectares: ");
        scanf("%f", &H);

    float M = H * 10000;

    printf("\nO valor convertido em metros quadrados: %.2f\n", M);
}



