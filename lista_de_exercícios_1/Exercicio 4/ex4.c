#include <stdio.h>
/*4. Leia um número real e imprima a quinta parte deste número.*/
int main (void) {
    float num;

    printf("Digite um numero: ");
        scanf("%f", &num);

    printf("A quinta parte do numero digitado: %.2f", num/5);
}
