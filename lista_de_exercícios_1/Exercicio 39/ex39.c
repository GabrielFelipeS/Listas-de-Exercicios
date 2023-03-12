#include <stdio.h>

/* Ler uma distância em quilômetros e apresentá-la convertida em milhas. A fórmula de
conversão é: 𝑀 = 𝐾/1,61 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.

*/
int main (void) {
    float K;

    printf("Digite o valor em quilometros: ");
        scanf("%f", &K);

    float M = K/1.61;

    printf("\nO valor convertido em milhas: %.2f\n", M);
}


