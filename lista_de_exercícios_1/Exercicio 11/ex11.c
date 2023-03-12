#include <stdio.h>
#include <math.h>


/*11. Leia o valor do raio de um círculo e calcule a área do círculo correspondente.
 Imprima o resultado dessa operação.
A área do círculo é 𝜋∗𝑟𝑎𝑖𝑜², considere 𝜋=3,141592 .*/

//Definição de uma constante chamada PI
#define PI 3.141592

int main (void) {
    float raio, area;
    printf("Digite o raio da area: ");
        scanf("%f", &raio);

    area = PI * pow(raio, 2); //84,948639
    printf("\nA area do raio: %f\n", area);
}
