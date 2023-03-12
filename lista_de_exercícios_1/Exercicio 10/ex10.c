#include <stdio.h>

/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.*/

int main(void) {
    int lado;
    printf("Digite um lado de um quadrado: ");
        scanf("%i", &lado);

    printf("\nA area do quadrado em m^2: %i\n", lado * lado);
}
