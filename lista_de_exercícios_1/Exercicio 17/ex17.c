#include <stdio.h>

/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda.*/

int main (void) {
    int dias, valor_por_dia = 30;

    printf("Digite os dias trabalhados: ");
        scanf("%i", &dias);

    float receber = (dias * valor_por_dia) * 0.92;

    printf("\nO encanador vai receber: %.2f\n", receber);
};
