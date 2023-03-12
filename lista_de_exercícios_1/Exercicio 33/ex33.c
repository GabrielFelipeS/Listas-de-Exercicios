#include <stdio.h>


/*Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A
fórmula de conversão é: 𝐶 = 5,0 ∗ (𝐹 − 32,0)/9,0, sendo 𝐶 a temperatura em Celsius e 𝐹 a
temperatura em Fahrenheit.
*/
int main (void) {
    float F;

    printf("Digite o valor em Fahrenheit: ");
        scanf("%f", &F);

    float C = 5.0 * ((F - 32.0) / 9);

    printf("\nO valor convertido em Celcius: %.2f\n", C);
}

