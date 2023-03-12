#include <stdio.h>

/*
Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é:
𝑅 = 𝐺 ∗ 𝜋/180 , sendo 𝐺 o ângulo em graus e R em radianos e 𝜋 = 3,141592.
*/

#define PI 3.141592
int main (void) {
    float G;

    printf("Digite o valor em graus: ");
        scanf("%f", &G);

    float R = G * PI / 180;

    printf("\nO valor convertido em radianos: %.2f\n", R);
}


