#include <stdio.h>

/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A
fórmula de conversão é: 𝐾 = 𝐶 + 273,15, sendo 𝐶 a temperatura em Celsius e 𝐾
atemperatura em Kelvin.*/

int main (void) {
    float C;

    printf("Digite o valor em Celcius: ");
        scanf("%f", C);

    float K = C + 273.15;

    printf("\nO valor convertido em Kelvin: %.2f\n", K);
}

