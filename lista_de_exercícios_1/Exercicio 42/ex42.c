#include <stdio.h>

/*
 Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros. A
fórmula de conversão é: 𝐶 = 𝑃 ∗ 2,54 , sendo 𝐶 o comprimento em centímetros e 𝑃 o
comprimento em polegadas
*/
int main (void) {
    float P;

    printf("Digite o valor em polegadas: ");
        scanf("%f", &P);

    float C = P * 2.54;

    printf("\nO valor convertido em centimetros: %.2f\n", C);
}



