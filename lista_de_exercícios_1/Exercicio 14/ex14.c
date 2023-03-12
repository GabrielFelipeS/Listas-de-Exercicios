#include <stdio.h>

/*14. Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo em vista que o desconto foi de 12%*/

int main (void) {
    float valor_produto, valor_novo;
    printf("Digite o valor do produto: ");
        scanf("%f", &valor_produto);

    valor_novo = valor_produto - (valor_produto * 0.12);

    printf("\nValor com desconto do produto: %.2f\n", valor_novo);

}
