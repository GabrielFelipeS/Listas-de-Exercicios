#include <stdio.h>

/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/

int main (void) {
    int dias, valor_por_dia = 30;

    printf("Digite os dias trabalhados: ");
        scanf("%i", &dias);

    float receber = (dias * valor_por_dia) * 0.92;

    printf("\nO encanador vai receber: %.2f\n", receber);
};
