#include <stdio.h>

/*
 Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de
conversão é: 𝐾 = 𝐿 ∗ 0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libra
*/
int main (void) {
    float L;

    printf("Digite o valor em libras: ");
        scanf("%f", &L);

    float K = L * 0.45;

    printf("\nO valor convertido em quilogramas: %.2f\n", K);
}



