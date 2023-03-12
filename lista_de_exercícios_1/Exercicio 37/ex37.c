#include <stdio.h>

/*Ler uma velocidade em 𝑚/𝑠 (metros por segundo) e apresentá-la convertida em
𝐾𝑚/ℎ (quilômetros por hora). A fórmula de conversão é: 𝐾 = 𝑀 ∗ 3,6 , sendo 𝐾 a velocidade
em 𝑘𝑚/ℎ e 𝑀 em 𝑚/𝑠.*/

int main (void) {
    float m;

    printf("Digite o valor em Celcius: ");
        scanf("%f", &m);

    float k = m * 3.6;

    printf("\nO valor convertido em km/h: %.2f\n", m);
}

