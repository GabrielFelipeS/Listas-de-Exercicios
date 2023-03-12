#include <stdio.h>

/*19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.*/

int main (void) {
    float salario;
    printf("Salario: ");
        scanf("%f", &salario);

    float gratificacao = salario * 0.05;
    float imposto = salario * 0.07;

    printf("O salario do funcionario: %f", salario + gratificacao - imposto);



}
