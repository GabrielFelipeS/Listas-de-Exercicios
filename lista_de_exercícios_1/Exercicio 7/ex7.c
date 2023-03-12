#include <stdio.h>

/*7. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares. */

int main (void) {
    float num_real, cotacao;
    printf("\nDigite um valor em real: ");
        scanf("%f", &num_real);

    printf("\nDigite a cotacao do dolar: ");
        scanf("%f", &cotacao);

    printf("\nO valor correspondente em dolares: %.2f\n", num_real * cotacao);
}
