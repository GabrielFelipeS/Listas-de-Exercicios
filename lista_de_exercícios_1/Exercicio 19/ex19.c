#include <stdio.h>

/*19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.*/

int main (void) {
    float salario;
    printf("Salario: ");
        scanf("%f", &salario);

    float gratificacao = salario * 0.05;
    float imposto = salario * 0.07;

    printf("O salario do funcionario: %f", salario + gratificacao - imposto);



}
