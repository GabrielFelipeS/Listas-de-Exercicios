#include <stdio.h>

/*5. Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três valores lidos.*/

int main (void){
    float num, soma = 0;
    printf("Digite tres numeros: \n");

    for (int i = 0; i < 3; i++) {
        printf("\nDigite um numero: ");
            scanf("%f", &num);
            soma += num * num;
    }


    printf("A soma dos quadrados dos numeros digitados: %f", soma);
}
