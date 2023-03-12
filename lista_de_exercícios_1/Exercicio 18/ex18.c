#include <stdio.h>

/*18. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês, e imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
valor calculado.*/

int main (void) {
    float valor_hora, numero_horas_mes;

    printf("Valor da hora: ");
        scanf("%f", &valor_hora);

    printf("\nNumero de horas mes: ");
        scanf("%f", & numero_horas_mes);

    float pagamento = valor_hora * numero_horas_mes;
    float receber = pagamento + pagamento * 0.10;

    printf("\nO valor a ser pago: %f\n", receber );
}
