#include <stdio.h>

/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
 O total a pagar com desconto de 10%;
 O valor de cada parcela, no parcelamento de 3 x sem juros;
 A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
 A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)*/

int main (void) {
    float total_pagar;

    printf("Valor total: ");
        scanf("%f", &total_pagar);

    float desconto = total_pagar - (total_pagar * 0.10);
    printf("Valor com  10%% de desconto: %.2f\n", desconto );
    printf("Valor por parcela: %.2f\n", total_pagar/3);
    printf("A comissao do vendedor,caso seja a vista: %.2f\n", desconto * 0.05);
    printf("A comissao do vendedor, no caso de a venda ser parcelada %.2f\n", total_pagar * 0.05);


}
