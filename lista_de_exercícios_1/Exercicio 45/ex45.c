#include <stdio.h>

/*
Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos 𝑚³. A
fórmula de conversão é: 𝑀 = 𝐿/1000 , sendo 𝐿 o volume em litros e 𝑀 o volume em metros
cúbicos.
*/
int main (void) {
    float L;

    printf("Digite o valor em litros: ");
        scanf("%f", &L);

    float M = L/1000;

    printf("\nO valor convertido em metros cubicos: %.2f\n", M);
}



