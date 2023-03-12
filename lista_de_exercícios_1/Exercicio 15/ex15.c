#include <stdio.h>

/*15. Receba o salário de um funcionário, calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%.*/

int main (void) {
    float salario, novo_salario;

    printf("Digite o salario: ");
        scanf("%f", &salario);

    novo_salario = salario + (salario * 0.25);

    printf("\nO novo salario: %.2f\n", novo_salario);
}
