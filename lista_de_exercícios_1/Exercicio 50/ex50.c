#include <stdio.h>

/*
Ler um valor de área em metros quadrados 𝑚2e apresentá-lo convertido em acres. A
fórmula de conversão é: 𝐴 = 𝑀 ∗ 0,000247, sendo 𝑀 a área em metros quadrados e 𝐴 a área
em acres.
*/
int main (void) {
    float M;

    printf("Digite o valor da area em metros quadrados: ");
        scanf("%f", &M);

    float A = M * 0.000247;

    printf("\nO valor convertido em acres: %.2f\n", A);
}



