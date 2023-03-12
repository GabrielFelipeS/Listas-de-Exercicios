#include <stdio.h>
#include <math.h>

/*13. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro.
O volume de um cilindro circular é calculado por meio da seguinte fórmula: V = 𝜋∗𝑟𝑎𝑖𝑜2∗𝑎𝑙𝑡𝑢𝑟𝑎, onde 𝜋=3,141592 .*/

#define PI 3.141592

int main (void) {
    float raio, altura, volume;

    printf("Digite o raio: ");
        scanf("%f", &raio);

    printf("Digite a altura: ");
        scanf("%f", &altura);

        volume = PI * pow(raio, 2) * altura;

        printf("\nA altura do cilindro: %.2f\n", volume);

}
