#include <stdio.h>

/*
. Ler um valor de área em acres e apresentá-lo convertido em metros quadrados 𝑚². A
fórmula de conversão é: 𝑀 = 𝐴 ∗ 4048,58 , sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.

*/
int main (void) {
    float A;

    printf("Digite o valor em acres: ");
        scanf("%f", &A);

    float M = A * 4048.58;

    printf("\nO valor convertido em metros quadrados: %.2f\n", M);
}


