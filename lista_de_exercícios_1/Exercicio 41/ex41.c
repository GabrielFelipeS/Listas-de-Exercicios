#include <stdio.h>

/*
Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é:
𝐺 = 𝑅 ∗ 180/𝜋 , sendo 𝐺 o ângulo em graus e 𝑅 em radianos e 𝜋 = 3,141592.
*/
#define PI 3.141592

int main (void) {
    float R;

    printf("Digite o valor em radianos: ");
        scanf("%f", &R);

    float G = R * 180 / PI;

    printf("\nO valor convertido em graus: %.2f\n", G);
}



