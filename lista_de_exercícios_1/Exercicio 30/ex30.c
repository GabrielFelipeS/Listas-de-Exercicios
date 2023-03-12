#include <stdio.h>
/* Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia.
*/

int main (void)
{
    float dinherio_amigo1, dinherio_amigo2, dinherio_amigo3, total_valor, premio;

    printf("\nValor apostado do amigo 1: ");
        scanf("%f", &dinherio_amigo1);

    printf("\nValor apostado do amigo 2: ");
        scanf("%f", &dinherio_amigo2);

    printf("\nValor apostado do amigo 3: ");
        scanf("%f", &dinherio_amigo3);

    printf("\nValor do premio: ");
        scanf("%f", &premio);

    total_valor = dinherio_amigo1 + dinherio_amigo2 + dinherio_amigo3;

    printf("\nO amigo 1 receberia R$%.2f", premio * (dinherio_amigo1/total_valor) );
    printf("\nO amigo 2 receberia R$%.2f", premio * (dinherio_amigo2/total_valor) );
    printf("\nO amigo 3 receberia R$%.2f", premio * (dinherio_amigo3/total_valor) );
}
