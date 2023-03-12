#include <stdio.h>

/*
. Ler um valor de comprimento em centímetros e apresentá-lo convertido em polegadas. A
fórmula de conversão é: 𝑃 = 𝐶/2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas.
*/

int main (void) {
    float C;

    printf("Digite o valor em centimetros: ");
        scanf("%f", &C);

    float P = C/2.54;

    printf("\nO valor convertido em polegadas: %.2f\n", P);
}



