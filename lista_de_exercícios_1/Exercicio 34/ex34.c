#include <stdio.h>


/*Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 𝐾 − 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾 a
temperatura em Kelvin.*/
int main (void) {
    float K;

    printf("Digite o valor em Kelvin: ");
        scanf("%f", K);

    float C = K - 273.15;

    printf("\nO valor convertido em Celsius: %.2f\n", C);
}
