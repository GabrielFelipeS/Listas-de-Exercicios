#include <stdio.h>
#include <ctype.h>

/*2. Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.*/


int main (void) {
    int valor, soma = 0;
    printf("Imprima tres valores inteiros\n");

    for (int i = 0; i < 3; i++) {

        printf("Digite um numero: ");
            scanf("%i", &valor);

        soma += valor;
    }

    printf("A soma dos numeros: %i\n", soma);
}

