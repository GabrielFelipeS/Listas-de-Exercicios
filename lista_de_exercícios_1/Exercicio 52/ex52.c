#include <stdio.h>

/*
Ler um valor de área em metros quadrados 𝑚² e apresentá-lo convertido em hectares. A
fórmula de conversão é: 𝐻 = 𝑀 ∗ 0,0001, sendo 𝑀 a área em metros quadrados e 𝐻 a área
em hectares.
*/
int main (void) {
    float M;

    printf("Digite o valor em metros quadrados: ");
        scanf("%f", &M);

    float H = M * 0.0001;

    printf("\nO valor convertido em hectares: %.2f\n", H);
}



