#include <stdio.h>
/* Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido
proporcionalmente ao valor que cada deu para a realiza��o da aposta. Fa�a um programa que
l� quanto cada apostador investiu, l� o valor do pr�mio, e escreve quanto cada um ganharia.
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
