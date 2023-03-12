#include <stdio.h>

/*32. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
A fórmula de conversão é: 𝐹=𝐶∗(9,05,0)+32,0, sendo 𝐹 a temperatura em Fahrenheit e 𝐶 a temperatura em Celsius.*/

int main (void) {
    float C;

    printf("Digite o valor em Celcius: ");
        scanf("%f", &C);

    float F = C * (9.0/5.0) + 32.0;

    printf("\nO valor convertido e: %.2f\n", F);
}
