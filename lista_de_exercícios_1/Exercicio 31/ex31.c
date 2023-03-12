#include <stdio.h>

/*31. Faça um programa para ler as dimensões de um terreno (comprimento 𝑐 e largura 𝑙), bem como o preço do metro do arame 𝑝,
então fornecer como saída o custo para cercar este mesmo terreno.*/

int main (void) {
    float comprimento, largura, preco;

    printf("Digite a largura: ");
        scanf("%f", &largura);

    printf("\nDigite a comprimento: ");
        scanf("%f", &comprimento);

    printf("\nDigite o preco do arame: ");
        scanf("%f", &preco);

    float valor_total = comprimento * largura * preco;

    printf("\nO preco a ser pago: R$ %.2f\n", valor_total);

}
