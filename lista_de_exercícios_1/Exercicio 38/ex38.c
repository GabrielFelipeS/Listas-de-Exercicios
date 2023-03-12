#include <stdio.h>

/*Ler uma distância em milhas e apresentá-la convertida em quilômetros. A fórmula de
conversão é: 𝐾 = 1,61 ∗ 𝑀 , sendo 𝐾 a distância em quilômetros e 𝑀 em milhas.
*/
int main (void) {
    float milhas;

    printf("Digite o valor em milhas: ");
        scanf("%f", &milhas);

    float K = milhas * 1.61;

    printf("\nO valor convertido em quilometros: %.2f\n", K);
}

