#include <stdio.h>

/*
Ler um valor de massa em quilogramas e apresentá-lo convertido em libras. A fórmula de
conversão é: 𝐿 = 𝐾/0,45 , sendo 𝐾 a massa em quilogramas e 𝐿 a massa em libras.

*/
int main (void) {
    float K;

    printf("Digite o valor em quilogramas: ");
        scanf("%f", &K);

    float L = K/0.45;

    printf("\nO valor convertido em libras: %.2f\n", L;
}



