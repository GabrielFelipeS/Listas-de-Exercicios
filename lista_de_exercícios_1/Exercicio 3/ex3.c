#include <stdio.h>
/*3. Efetue a leitura de um n�mero real e imprima o resultado do quadrado desse n�mero.*/
int main(void) {
    float num;

    printf("Digite um numero: ");
        scanf("%f", &num);

    printf("O quadrado desse numero: %.2f", num*num);
}
