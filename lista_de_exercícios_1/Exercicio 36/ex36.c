#include <stdio.h>

/*. Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la convertida em 𝑚/𝑠
(metros por segundo). A fórmula de conversão é: 𝑀 = 𝑘/3,6, sendo 𝐾 a velocidade em 𝑘𝑚/ℎ
e 𝑀 em m/s.*/

int main (void) {
    float k;

    printf("Digite o valor em Km/h: ");
        scanf("%f", &k);

    float m = k/3.6;

    printf("\nO valor convertido em metros por segundo: %.2f\n", m);
}

