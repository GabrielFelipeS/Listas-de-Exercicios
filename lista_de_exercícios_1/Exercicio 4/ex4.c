#include <stdio.h>
/*4. Leia um n�mero real e imprima a quinta parte deste n�mero.*/
int main (void) {
    float num;

    printf("Digite um numero: ");
        scanf("%f", &num);

    printf("A quinta parte do numero digitado: %.2f", num/5);
}
