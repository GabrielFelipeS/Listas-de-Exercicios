#include <stdio.h>

/*
Ler um valor de volume em metros cúbicos 𝑚³ e apresentá-lo convertido em litros. A
fórmula de conversão é: 𝐿 = 1000 ∗ 𝑀, sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.
*/
int main (void) {
    float M;

    printf("Digite o valor em metros cubicos: ");
        scanf("%f", &M);

    float L = 1000 * M ;

    printf("\nO valor convertido em litros: %.2f\n", L);
}



